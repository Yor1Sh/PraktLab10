#include "pch.h"
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <windows.h>

using namespace System;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int n;
    std::cout << "������ ������� ������ ����: ";
    std::cin >> n;

    array<double>^ Upr = gcnew array<double>(n);
    array<double>^ d = gcnew array<double>(n);

    Console::WriteLine("������ �������� Upr (���/��) ��� ����� ������� ����:");
    for (int i = 0; i < n; i++) {
        String^ input = Console::ReadLine();
        Upr[i] = Convert::ToDouble(input);
    }

    for (int i = 0; i < n; i++) {
        d[i] = sqrt(Upr[i] / (0.1 * 900));
    }

    std::cout << std::setw(10) << "Upr (���/��)" << std::setw(15) << "d (��)" << std::endl;
    std::cout << "---------------------------------" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << std::setw(10) << Upr[i] << std::setw(15) << std::fixed << std::setprecision(2) << d[i] << std::endl;
    }

    return 0;
}