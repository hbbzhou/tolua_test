#ifndef tfunction_h
#define tfunction_h

#include <stdio.h>
#include <string.h>
#include <iostream>
#include "type.h"


class Role {//tolua_export
public:
	int m_nLV;
	//tolua_begin
	Role():m_nLV(2){}

#pragma region 
	void SetLV(const int32 & v_) { m_nLV = v_; }
	void SetExp( int v_) 
	{ 
		m_nLV = v_; 
	}
	int GetLV() { return m_nLV; }

#pragma endregion

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
		return x.m_nLV + y.m_nLV;
	}

	static TestClass* MakeObj (float x, float y)
	{
		return new TestClass(x,y,0);
	}
};
//tolua_end
#endif
