// tolua_test.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <assert.h>
#include <map>
#include <stdio.h>


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
int luaopen_gslib(lua_State* L);
int luaopen_pb(lua_State *L);							//����


std::map<std::string, Role *> g_map;

int _tmain(int argc, _TCHAR* argv[])
{
	//��ʼ��ȫ�ֱ���
	Role oHbbRole;
	g_map["hbb"] = &oHbbRole;

	lua_State* L = lua_open();
	luaL_openlibs(L);
	tolua_tfunction_open(L);
	luaopen_gslib(L);
	luaopen_pb(L);

	system("echo %cd%");

	if(luaL_dofile(L,"../script/msg_mgr.lua") ){
		printf("%s \n", lua_tostring(L, -1));
		assert(0&& "error open ");
	}
	
	//Э�鴦���߼�
	char str_cmd[128];
	while (1) {
		gets_s(str_cmd, 128);

		if (strcmp(str_cmd, "exit") == 0) {
			break;
		}
		else if (strcmp(str_cmd, "1") == 0) {
			lua_getglobal(L, "deal_msg");//��ȡlua�еĺ���
			lua_pushinteger(L , int(14) ); //����lua_pushϵ�к��������������ѹջ������lua_pushnumber(L, x)
			lua_pushstring(L , "'hbb':'role':'SetLV':10" ); //����lua_pushϵ�к��������������ѹջ������lua_pushnumber(L, x)
			lua_pcall(L, 2, 0, 0);
		}
		else if (strcmp(str_cmd, "2") == 0) {
			lua_getglobal(L, "test1");//��ȡlua�еĺ���
			int nRet = lua_pcall(L, 0, 0, 0);
			if (nRet != 0) {
				printf("%s \n", lua_tostring(L, -1));
			}
		}
		else if (strcmp(str_cmd, "reset") == 0) {
			if (luaL_dofile(L, "../script/tfunction.lua")) {
				printf("%s \n", lua_tostring(L, -1));
				assert(0 && "open error");
			}
		}
		else{
			printf("####\n");
		}
	}

	//Role role1 , role2;
	//role1.lv = 5;
	//lua_getglobal(L, "deal_role") ;//��ȡlua�еĺ���
	//lua_pushinteger(L , int(&role1) ); //����lua_pushϵ�к��������������ѹջ������lua_pushnumber(L, x)
	//lua_pushinteger(L , int(&role2) ); //����lua_pushϵ�к��������������ѹջ������lua_pushnumber(L, x)
	//lua_pcall(L, 2, 0, 0);


	lua_close(L);


	return 0;
}

