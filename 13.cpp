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
    cout << "������� ������:\n";
    gets_s(str);
 
    cout << "\n\n�� �����: " << str << '\n';
    cout << "����� ������ �����: " << strlen(str) << '\n';
    cout << "\n";
 
    // ��������� ������� �� ������.
    for(t = 0; ; t++)
    {
        for(g = 0; str[t] != ' ' && str[t]; g++, t++)
            token[g] = str[t];
        token[g] = '\0'; // ��������� ������� ������� ��������.
        
        cout << "\n�����: " << token << '\t';
        cout << "��� ����� �����: " << strlen(token) << '\n';
        
        if(!str[t]) break;
    }
    _kbhit();
 
    return 0;
}