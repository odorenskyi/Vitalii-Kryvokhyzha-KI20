#include <iostream>
#include "ModulesKrivokhizha.h"
#include <locale.h>
#include <windows.h>

using namespace std;

void copyright()
{
    cout << "Krivokhizha Vitalii. CNTU 2021. :copyright:" << endl;
}

void logicalExpression(char a, char b, bool result)
{
    cout << "Введiть символ a: ";
    cin >> a;
    cout << "Введiть символ b: ";
    cin >> b;
    cout << "a + 1 <= b: " << boolalpha << (a + 1 <= b) << endl;
}

float functionNumberSystem(int x, int y, int z, int S)
{
    cout << "\n Уведiть x(Число х повинно бути бiльше 0): ";
    cin >> x;

    while (x < 0){
            cout << "\n Уведiть x(Число х повинно бути бiльше 0): ";
            cin >> x;
           }
    cout << "\n Уведiть y(Число y повинно бути бiльше 0): ";
    cin >> y;

    while (y < 0){
            cout << "\n Уведiть y(Число х повинно бути бiльше 0): ";
            cin >> y;
           }
    cout << "\n Уведiть z(Число z повинно бути бiльше 0): ";
    cin >> z;

    while (z < 0){
            cout << "\n Уведiть z(Число х повинно бути бiльше 0): ";
            cin >> z;
           }

    cout << "X у десятковiй системi числення - " << dec << x << endl;
    cout << "X у шiстнадцятковiй системi числення - " << hex << x << endl << endl;
    cout << "Y у десятковiй системi числення - " << dec << y << endl;
    cout << "Y у шiстнадцятковiй системi числення - " << hex << y << endl << endl;
    cout << "Z у десятковiй системi числення - " << dec << z << endl;
    cout << "Z у шiстнадцятковiй системi числення - " << hex << z << endl << endl;
    S = s_calculation(x, y, z);
    cout << "\n S = " << s_calculation(x, y, z) << endl;
}

int main()
{
    setlocale(LC_ALL, "ukr");
    copyright();
    char a;
    char b;
    int x = 0;
    int y = 0;
    int z = 0;
    int S = 0;
    bool result;
    logicalExpression(a, b, result);
    cout << endl;
    functionNumberSystem(x, y, z, S);
    getchar();
    return 0;
}
