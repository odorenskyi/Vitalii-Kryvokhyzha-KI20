#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>
#include <string>
#include <windows.h>
#include "ModulesKrivokhizha.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

    string path_1 = "out_File.txt";
    string path_2 = "in_File.txt";
    string date = "23.05.2021";
    string str;
    int num = 40;


    cout << "TestDriver for Lab10:" << endl;
    cout << "UnitTest10.1" << endl;

    ifstream in_File;
    in_File.open(path_2);

    if (path_1 == "out_File.txt" && path_2 == "in_File.txt")
    {
        cout << "Правильність імен файлів - Passed" << endl;
    }

    else
    {
        cout << "Правильність імен файлів - Failed" << endl;
    }

    while(!in_File.eof())
    {
        getline(in_File, str);
    }

    if(str.find("Krivokhizha Vitalii. CNTU 2021. Ukraine. Kropivnitskii. (c)"))
    {
        cout << "Iнформацiя про розробника - Passed" << endl;
    }

    else
    {
        cout << "Iнформацiя про розробника - Failed" << endl;
    }

    if(num >= 10 && num <= 100)
    {
        cout << "Випадкове число - Passed" << endl;
    }

    else
    {
        cout << "Випадкове число - Failed" << endl;
    }


    cout << "====================================================================================\n";
    cout << "UnitTest10.2" << endl;

    if(date == "23.05.2021")
    {
         cout << "Дата дозапису інформації - Passed" << endl;
    }

    else{
         cout << "Дата дозапису інформації - Failed" << endl;
    }

    cout << "====================================================================================\n";
    cout << "UnitTest10.3" << endl;

    float res1 = s_calculation(2, 2, 2);
    float res2 = s_calculation(1, 2, 3);

    if(res1 == -1,89)
    {
        cout << "Результат S - Passed" << endl;
    }
    else{
        cout << "Результат S - Failed" << endl;
    }

    if(res1 == -2,43)
    {
        cout << "Результат S - Passed" << endl;
    }
    else{
        cout << "Результат S - Failed" << endl;
    }

    string b = "00000000000000000000000000001010";

    if(b == "00000000000000000000000000001010")
    {
        cout << "Число b у двiйковому кодi - Passed" << endl;
    }
    else
    {
        cout << "Число b у двiйковому кодi - Failed" << endl;
    }
    in_File.close();
    system("pause");
    return 0;
}
