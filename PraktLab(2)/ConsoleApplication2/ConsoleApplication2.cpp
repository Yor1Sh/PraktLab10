#include "pch.h"

using namespace System;

int main(array<System::String^>^ args)
{
    String^ s = "¿‘–» ¿";

    for (int i = 1; i <= s->Length; i++)
    {
        Console::WriteLine(s->Substring(0, i));
    }

    return 0;
}
