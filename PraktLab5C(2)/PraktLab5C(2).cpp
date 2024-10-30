#include "pch.h"
#include <iostream>
#include <windows.h>
#include <string>

using namespace System;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    Console::WriteLine("Введіть кількість рядків і стовпців матриць:");
    int rows, cols;
    String^ inputRows = Console::ReadLine();
    rows = Convert::ToInt32(inputRows);
    String^ inputCols = Console::ReadLine();
    cols = Convert::ToInt32(inputCols);

    array<array<double>^>^ matrix1 = gcnew array<array<double>^>(rows);
    array<array<double>^>^ matrix2 = gcnew array<array<double>^>(rows);
    array<array<double>^>^ result = gcnew array<array<double>^>(rows);

    for (int i = 0; i < rows; i++) {
        matrix1[i] = gcnew array<double>(cols);
        matrix2[i] = gcnew array<double>(cols);
        result[i] = gcnew array<double>(cols);
    }

    Console::WriteLine("Введіть елементи першої матриці по рядках (введіть {0} елементів у кожному рядку):", cols);
    for (int i = 0; i < rows; i++) {
        String^ inputLine = Console::ReadLine();
        array<String^>^ elements = inputLine->Split(' ');

        for (int j = 0; j < cols; j++) {
            matrix1[i][j] = Convert::ToDouble(elements[j]);
        }
    }

    Console::WriteLine("Введіть елементи другої матриці по рядках (введіть {0} елементів у кожному рядку):", cols);
    for (int i = 0; i < rows; i++) {
        String^ inputLine = Console::ReadLine();
        array<String^>^ elements = inputLine->Split(' ');

        for (int j = 0; j < cols; j++) {
            matrix2[i][j] = Convert::ToDouble(elements[j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    Console::WriteLine("Результуюча матриця:");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            Console::Write("{0} ", result[i][j]);
        }
        Console::WriteLine();
    }

    return 0;
}