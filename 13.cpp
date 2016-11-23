#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <cstring>
#include <windows.h>
using namespace std;
 
int _tmain(int argc, _TCHAR* argv[])
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
 
    char str[80];
    char token[80];
    int t, g;
    cout << "Введите строку:\n";
    gets_s(str);
 
    cout << "\n\nВы ввели: " << str << '\n';
    cout << "Длина строки равна: " << strlen(str) << '\n';
    cout << "\n";
 
    // Считываем лексему из строки.
    for(t = 0; ; t++)
    {
        for(g = 0; str[t] != ' ' && str[t]; g++, t++)
            token[g] = str[t];
        token[g] = '\0'; // Завершаем лексему нулевым символом.
        
        cout << "\nСлово: " << token << '\t';
        cout << "Его длина равна: " << strlen(token) << '\n';
        
        if(!str[t]) break;
    }
    _kbhit();
 
    return 0;
}