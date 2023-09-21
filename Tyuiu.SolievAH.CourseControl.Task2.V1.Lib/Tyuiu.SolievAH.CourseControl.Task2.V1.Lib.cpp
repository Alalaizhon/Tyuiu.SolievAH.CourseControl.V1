// Tyuiu.SolievAH.CourseControl.Task2.V1.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "math.h"
#include "../../Tyuiu.CoursControl_0/Tyuiu.CoursControl_0.cpp"

// TODO: This is an example of a library function
class Service1 :public ISprint0Task8V2
{
	virtual int Rezultat(int a, int b, int c) override
	{

		return 5 + ((2 * a - b) / (3 + pow(c, 2)));

	}

};