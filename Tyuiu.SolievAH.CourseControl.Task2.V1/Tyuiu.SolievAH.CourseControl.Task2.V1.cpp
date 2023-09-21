// Tyuiu.SolievAH.CourseControl.Task2.V1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include "../Tyuiu.SolievAH.CourseControl.Task2.V1.Lib/Tyuiu.SolievAH.CourseControl.Task2.V1.Lib.cpp"


using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b, c;
    cout << "Введите значение х у z через пробел!: \n";
    cin >> a >> b >> c; 
    ISprint0Task8V2* res = new Service1();
    int itog = res->Rezultat(a, b, c);
    cout << "Значения выражение 5+((2*x-z)/(3+y^2) = " << itog;
    cout << "\nПоздравляю!)";
}
