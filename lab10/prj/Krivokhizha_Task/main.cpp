#include <iostream>
#include <windows.h>
#include <ctime>
#include "ModulesKrivokhizha.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

    task10_1();

    task10_2();

    task10_3();

    system("pause");
}
