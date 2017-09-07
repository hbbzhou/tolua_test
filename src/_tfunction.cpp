/*
** Lua binding: tfunction
** Generated automatically by tolua++-1.0.92 on 09/06/17 21:24:03.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_tfunction_open (lua_State* tolua_S);

#include "tfunction.h"
#include "type.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_TestClass (lua_State* tolua_S)
{
 TestClass* self = (TestClass*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Role (lua_State* tolua_S)
{
 Role* self = (Role*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"TestClass");
 tolua_usertype(tolua_S,"Role");
}

/* method: new of class  Role */
#ifndef TOLUA_DISABLE_tolua_tfunction_Role_new00
static int tolua_tfunction_Role_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Role",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Role* tolua_ret = (Role*)  Mtolua_new((Role)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Role");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Role */
#ifndef TOLUA_DISABLE_tolua_tfunction_Role_new00_local
static int tolua_tfunction_Role_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Role",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Role* tolua_ret = (Role*)  Mtolua_new((Role)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Role");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetLV of class  Role */
#ifndef TOLUA_DISABLE_tolua_tfunction_Role_SetLV00
static int tolua_tfunction_Role_SetLV00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Role",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Role* self = (Role*)  tolua_tousertype(tolua_S,1,0);
  const int32 v_ = ((const int32)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetLV'", NULL);
#endif
  {
   self->SetLV(v_);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetLV'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetExp of class  Role */
#ifndef TOLUA_DISABLE_tolua_tfunction_Role_SetExp00
static int tolua_tfunction_Role_SetExp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Role",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Role* self = (Role*)  tolua_tousertype(tolua_S,1,0);
  int v_ = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetExp'", NULL);
#endif
  {
   self->SetExp(v_);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetExp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetLV of class  Role */
#ifndef TOLUA_DISABLE_tolua_tfunction_Role_GetLV00
static int tolua_tfunction_Role_GetLV00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Role",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Role* self = (Role*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetLV'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetLV();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetLV'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Change of class  Role */
#ifndef TOLUA_DISABLE_tolua_tfunction_Role_Change00
static int tolua_tfunction_Role_Change00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Role",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  {
   Role* tolua_ret = (Role*)  Role::Change(x);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Role");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Change'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  TestClass */
#ifndef TOLUA_DISABLE_tolua_tfunction_TestClass_new00
static int tolua_tfunction_TestClass_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"TestClass",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float cr = ((float)  tolua_tonumber(tolua_S,2,0.0f));
  float cg = ((float)  tolua_tonumber(tolua_S,3,0.0f));
  float cb = ((float)  tolua_tonumber(tolua_S,4,0.0f));
  {
   TestClass* tolua_ret = (TestClass*)  Mtolua_new((TestClass)(cr,cg,cb));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"TestClass");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  TestClass */
#ifndef TOLUA_DISABLE_tolua_tfunction_TestClass_new00_local
static int tolua_tfunction_TestClass_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"TestClass",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float cr = ((float)  tolua_tonumber(tolua_S,2,0.0f));
  float cg = ((float)  tolua_tonumber(tolua_S,3,0.0f));
  float cb = ((float)  tolua_tonumber(tolua_S,4,0.0f));
  {
   TestClass* tolua_ret = (TestClass*)  Mtolua_new((TestClass)(cr,cg,cb));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"TestClass");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  TestClass */
#ifndef TOLUA_DISABLE_tolua_tfunction_TestClass_delete00
static int tolua_tfunction_TestClass_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TestClass",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TestClass* self = (TestClass*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LvAdd of class  TestClass */
#ifndef TOLUA_DISABLE_tolua_tfunction_TestClass_LvAdd00
static int tolua_tfunction_TestClass_LvAdd00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TestClass",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Role",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"Role",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TestClass* self = (TestClass*)  tolua_tousertype(tolua_S,1,0);
  Role x = *((Role*)  tolua_tousertype(tolua_S,2,0));
  Role y = *((Role*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LvAdd'", NULL);
#endif
  {
   int tolua_ret = (int)  self->LvAdd(x,y);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LvAdd'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: MakeObj of class  TestClass */
#ifndef TOLUA_DISABLE_tolua_tfunction_TestClass_MakeObj00
static int tolua_tfunction_TestClass_MakeObj00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"TestClass",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   TestClass* tolua_ret = (TestClass*)  TestClass::MakeObj(x,y);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"TestClass");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'MakeObj'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_tfunction_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Role","Role","",tolua_collect_Role);
  #else
  tolua_cclass(tolua_S,"Role","Role","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Role");
   tolua_function(tolua_S,"new",tolua_tfunction_Role_new00);
   tolua_function(tolua_S,"new_local",tolua_tfunction_Role_new00_local);
   tolua_function(tolua_S,".call",tolua_tfunction_Role_new00_local);
   tolua_function(tolua_S,"SetLV",tolua_tfunction_Role_SetLV00);
   tolua_function(tolua_S,"SetExp",tolua_tfunction_Role_SetExp00);
   tolua_function(tolua_S,"GetLV",tolua_tfunction_Role_GetLV00);
   tolua_function(tolua_S,"Change",tolua_tfunction_Role_Change00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"TestClass","TestClass","",tolua_collect_TestClass);
  #else
  tolua_cclass(tolua_S,"TestClass","TestClass","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"TestClass");
   tolua_function(tolua_S,"new",tolua_tfunction_TestClass_new00);
   tolua_function(tolua_S,"new_local",tolua_tfunction_TestClass_new00_local);
   tolua_function(tolua_S,".call",tolua_tfunction_TestClass_new00_local);
   tolua_function(tolua_S,"delete",tolua_tfunction_TestClass_delete00);
   tolua_function(tolua_S,"LvAdd",tolua_tfunction_TestClass_LvAdd00);
   tolua_function(tolua_S,"MakeObj",tolua_tfunction_TestClass_MakeObj00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_tfunction (lua_State* tolua_S) {
 return tolua_tfunction_open(tolua_S);
};
#endif

