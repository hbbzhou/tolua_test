#ifndef tfunction_h
#define tfunction_h

#include <stdio.h>
#include <string.h>
#include <iostream>


class Role {//tolua_export
public:
	//tolua_begin
	Role():lv(2){}
	int lv;

	static Role*  Change (int x)
	{
		return (Role* )x;
	}
};
//tolua_end

class TestClass    //tolua_export
{                                 //tolua_export
	float r, g, b;
public:

	//tolua_begin
	TestClass (float cr=0.0f, float cg=0.0f, float cb=0.0f)
		:  r(cr), g(cg), b(cb)
	{
	}
	virtual ~TestClass () { }


	int LvAdd (Role x, Role y)
	{
		return x.lv+ y.lv;
	}

	static TestClass* MakeObj (float x, float y)
	{
		return new TestClass(x,y,0);
	}
};
//tolua_end
#endif
