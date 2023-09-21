// Tyuiu.SolievAH.CourseControl.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.CoursControl_0/Tyuiu.CoursControl_0.cpp"

// TODO: This is an example of a library function
class Service :public ISprint0Task8V0
{
	virtual int Control(int a) override
	{
		int a1 = a / 100;
		int a2 = a / 10 % 10;
		int a3 = a % 10;
		int proiz = a1 * a2 * a3;
		return proiz;
	};

};