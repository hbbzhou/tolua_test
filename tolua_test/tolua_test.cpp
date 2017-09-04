// tolua_test.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <assert.h>


extern "C" {
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
}
#include "tolua++.h"

#include "../src/tfunction.h"
#pragma comment (lib, "lua5.1.lib")
#pragma comment (lib, "toluapp.lib")

TOLUA_API int  tolua_tfunction_open (lua_State* tolua_S);


int _tmain(int argc, _TCHAR* argv[])
{
	lua_State* L = lua_open();
	luaL_openlibs(L);
	tolua_tfunction_open(L);

	if(luaL_dofile(L,"../script/tfunction.lua") ){
		assert(0&& "open error");
	}

	Role role1 , role2;
	role1.lv = 5;
	lua_getglobal(L, "deal_role") ;//��ȡlua�еĺ���
	lua_pushinteger(L , int(&role1) ); //����lua_pushϵ�к��������������ѹջ������lua_pushnumber(L, x)
	lua_pushinteger(L , int(&role2) ); //����lua_pushϵ�к��������������ѹջ������lua_pushnumber(L, x)
	lua_pcall(L, 2, 0, 0);


	lua_close(L);


	return 0;
}

