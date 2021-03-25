#include <iostream>
#include <windows.h>
#include "ModulesKrivokhizha.h"

using namespace std;

void copyright()
{
    cout << "Krivokhizha Vitalii. CNTU 2021. ©" << endl;
}

void logicalExpression(char a, char b, bool result)
{
    cout << "¬вед≥ть символ є1: ";
    cin >> a;
    cout << "¬вед≥ть символ є2: ";
    cin >> b;
    if(a + 1 <= b){
        result = 1;
    }
    else{
        result = 0;
    }
    cout << "а = "<< a << endl << "b = " << b << endl;
    cout << "Result: " << result;
}

float functionNumberSystem(float x, float y, float z, float S)
{
    cout << "¬вед≥ть число x: ";
    cin >> x;
    cout << "¬вед≥ть число y: ";
    cin >> y;
    cout << "¬вед≥ть число z: ";
    cin >> z;
    cout << "X у ш≥стнадц€тков≥й ш≥стнадц€тков≥й систем≥ счисленн€ - " << hexfloat << x << endl;
    cout << "Y у ш≥стнадц€тков≥й ш≥стнадц€тков≥й систем≥ счисленн€ - " << hexfloat << y << endl;
    cout << "Z у ш≥стнадц€тков≥й ш≥стнадц€тков≥й систем≥ счисленн€ - " << hexfloat << z << endl;

    S = s_calculation(x, y, z);
    cout << "–езультат S у ш≥стнадц€тков≥й систем≥: " << hexfloat << S << endl;
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    copyright();
    char a;
    char b;
    float x = 0;
    float y = 0;
    float z = 0;
    float S = 0;
    bool result;

    logicalExpression(a, b, result);
    cout << endl;
    functionNumberSystem(x, y, z, S);

    getchar();

    return 0;
}
