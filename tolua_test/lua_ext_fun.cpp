// tolua_test.cpp : 定义控制台应用程序的入口点。
//

extern "C" {
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
}

#include "tolua++.h"

#include <map>
#include "../src/tfunction.h"


static void stackDump(lua_State* L)
{
	int top = lua_gettop(L);
	for (int i = 1; i <= top; ++i) {
		int t = lua_type(L, i);
		switch (t) {
		case LUA_TSTRING:
			printf("'%s'", lua_tostring(L, i));
			break;
		case LUA_TBOOLEAN:
			printf(lua_toboolean(L, i) ? "true" : "false");
			break;
		case LUA_TNUMBER:
			printf("%g", lua_tonumber(L, i));
			break;
		default:
			printf("%s", lua_typename(L, t));
			break;

		}
		printf("");

	}
	printf("\n");
}

extern std::map<std::string, Role *> g_map;

int Sub(lua_State* L)
{
	double op1 = luaL_checknumber(L, 1);
	double op2 = luaL_checknumber(L, 2);
	lua_pushnumber(L, op1 - op2);
	return 1;
}

int FindRole(lua_State* L)
{
	const char * p_ = lua_tostring(L, 1);
	if (p_ == NULL) {
		return 1;
	}
	Role * pRet = g_map[std::string(p_) ];
	tolua_pushusertype(L, (void*)pRet, "Role");
	return 1;
}

static luaL_Reg fun_list[] = {
	{ "FindRole", FindRole },
	{ "Sub", Sub },
	{ NULL, NULL }
};

int luaopen_gslib(lua_State* L)
{
	const char* libName = "gslib";
	luaL_register(L, libName, fun_list);
	return 1;
}


