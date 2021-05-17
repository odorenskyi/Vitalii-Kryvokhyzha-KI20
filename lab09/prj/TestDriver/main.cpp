#include <iostream>
#include <cmath>
#include "ModulesKrivokhizha.h"
#include <locale.h>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");

    int number[5] = {1, 5, 55, 557, 5100};
    int bit_result[5] = {0, 2, 5, 5, 5};

    int bofortBal[13] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    int ukrSystem[5] = {23, 25, 27, 29, 31};

    cout << "UnitTest 9.1" << endl;
    for(int i = 0; i < 13; i++){
       cout << "Passed! Your testing result = ";
       bofort_actions(bofortBal[i]);
       cout << endl;
    }

    cout << " ===================================================== " << endl;

    cout << "UnitTest 9.2" << endl;

    for(int i = 0; i < 5; i++){
       cout << "Passed! Your testing result = ";
       socks_actions(ukrSystem[i]);
       cout << endl;
    }


    cout << " ===================================================== " << endl;

    cout << "UnitTest 9.3" << endl;

    for(int i = 0; i < 5; i++){
        if(bin_zero_counter(number[i]) == bit_result[i]){
            cout << bit_result[i] << " - Passed" << endl;
        } else {
            cout << bit_result[i] << " - Failed" << endl;
        }
    }

    getchar();

    return 0;
}
