#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.SolievAH.CourseControl.Lib/Tyuiu.SolievAH.CourseControl.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuSolievAHCourseControlTest
{
	TEST_CLASS(TyuiuSolievAHCourseControlTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task8V0* date = new Service();
			int a = 333;
			int a1 = a / 100;
			int a2 = a / 10 % 10;
			int a3 = a % 10;
			int res;

			res = date->Control(a);

			Assert::AreEqual(27, res);
		}
	};
}
