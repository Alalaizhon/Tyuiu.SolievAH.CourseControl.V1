// Tyiui.SolievAH.CourseControl.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include "../Tyuiu.SolievAH.CourseControl.Lib/Tyuiu.SolievAH.CourseControl.Lib.cpp"
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ISprint0Task8V0* date = new Service;
    int a = 0;
    cout << "Введите трехзначное число: \n";
    cin >> a;
    int a1 = a / 100;
    int a2 = a / 10 % 10;
    int a3 = a % 10;
    int proiz = a1 * a2 * a3;
    cout << "произведение цифр трехзначного числа равна: " << proiz;
}