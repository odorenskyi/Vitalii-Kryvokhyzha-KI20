#include <iostream>
#include "ModulesKrivokhizha.h"
#include <locale.h>
#include <windows.h>

using namespace std;

void copyright()
{
    cout << "Krivokhizha Vitalii. CNTU 2021. (c)" << endl;
}

void logicalExpression(char a, char b, bool result)
{
    cout << "¬ведiть символ a: ";
    cin >> a;
    cout << "¬ведiть символ b: ";
    cin >> b;
    cout << "a + 1 <= b: " << boolalpha << (a + 1 <= b) << endl;
}

float functionNumberSystem(int x, int y, int z, int S)
{
    cout << "\n ”ведiть x(„исло х повинно бути бiльше 0): ";
    cin >> x;

    while (x < 0){
            cout << "\n ”ведiть x(„исло х повинно бути бiльше 0): ";
            cin >> x;
           }
    cout << "\n ”ведiть y(„исло y повинно бути бiльше 0): ";
    cin >> y;

    while (y < 0){
            cout << "\n ”ведiть y(„исло х повинно бути бiльше 0): ";
            cin >> y;
           }
    cout << "\n ”ведiть z(„исло z повинно бути бiльше 0): ";
    cin >> z;

    while (z < 0){
            cout << "\n ”ведiть z(„исло х повинно бути бiльше 0): ";
            cin >> z;
           }

    cout << "X у дес€тковiй системi численн€ - " << dec << x << endl;
    cout << "X у шiстнадц€тковiй системi численн€ - " << hex << x << endl << endl;
    cout << "Y у дес€тковiй системi численн€ - " << dec << y << endl;
    cout << "Y у шiстнадц€тковiй системi численн€ - " << hex << y << endl << endl;
    cout << "Z у дес€тковiй системi численн€ - " << dec << z << endl;
    cout << "Z у шiстнадц€тковiй системi численн€ - " << hex << z << endl << endl;
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
    system("pause");

    return 0;
}
