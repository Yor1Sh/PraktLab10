#include "pch.h"
#include <iostream>
#include <string>
#include <windows.h>

using namespace System;

int main(array<System::String^>^ args)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Console::WriteLine("Введіть рядок символів:");
    String^ input = Console::ReadLine();

    array<String^>^ words = input->Split(gcnew array<wchar_t>{' '}, StringSplitOptions::RemoveEmptyEntries);

    if (words->Length == 0) {
        Console::WriteLine("Немає слів у рядку.");
        return 0;
    }

    int minLength = words[0]->Length;
    for (int i = 1; i < words->Length; i++) {
        if (words[i]->Length < minLength) {
            minLength = words[i]->Length;
        }
    }

    Console::WriteLine("Довжина найкоротшого слова: {0}", minLength);

    return 0;
}