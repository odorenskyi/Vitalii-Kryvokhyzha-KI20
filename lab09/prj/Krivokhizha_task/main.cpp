#include <iostream>
#include <cmath>
#include "ModulesKrivokhizha.h"
#include <locale.h>
#include <windows.h>

using namespace std;

void copyright()
{
    cout << "Krivokhizha Vitalii. CNTU 2021. (c)\n" << endl;
}

int main()
{
    setlocale(LC_ALL, "ukr");

    char input = 0;
    float x = 0;
    float y = 0;
    float z = 0;
    int bofortBal = 0;
    int socks_Size = 0;
    int N = 0;
    copyright();

    cout << "Ключ u - виклик функцiї s_calculation." << endl;
    cout << "Ключ o - виклик функцiї 9.1." << endl;
    cout << "Ключ p - виклик функцiї 9.2." << endl;
    cout << "Ключ a - порахувати кiлькiсть бiнарних нулiв та одиниць числа." << endl;
    cout << "Ключi s, S - вийти з програми." << endl;
    cout << "===================================================== " << endl;

    while(true)
    {
        cout << "Введiть ключ: " << endl;
        cin >> input;
        if(input == 'u')
        {
            cout << "Ви викликали функцiю s_calculation" << endl;
            while(x < 1)
            {
                cout << "Введiть х (х має бути бiльше 1): ";
                cin >> x;
            }

            while(y < 1)
            {
                cout << "Введiть y (y має бути бiльше 1): ";
                cin >> y;
            }

            while(z < 1)
            {
                cout << "Введiть z (z має бути бiльше 1): ";
                cin >> z;
            }
            cout << "Результат S = " << s_calculation(x, y, z) << endl;
            cout << "______________________________________________________________________" << endl;
        } else if(input == 'o'){
              cout << "Ви викликали функцiю 9.1" << endl;
              cout << "Введiть бал Бофорта(вiн має бути вiд 0 до 12): ";
              cin >> bofortBal;
                  while (bofortBal > 12 || bofortBal < 0)
                  {
                      cout << "Не вiрне значення(бал Бофорта має бути вiд 0 до 12) " << endl;
                      cout << "Введiть бал Бофорта(вiн має бути вiд 0 до 12): ";
                      cin >> bofortBal;
                  }
              bofort_actions(bofortBal);
              cout << endl;
              cout << "______________________________________________________________________" << endl;

        }else if(input == 'p'){
            cout << "Ви викликали функцiю 9.2" << endl;
            cout << "Введiть розмiр шкарпетки(вiн має бути або 23 або 25 або 27 або 29 або 31): ";
            cin >> socks_Size;
                while(socks_Size != 23 && socks_Size != 25 && socks_Size != 27 && socks_Size != 29 && socks_Size != 31)
                {
                    cout << "Не вiрний розмiр шкарпетки!" << endl;
                    cout << "Введiть розмiр шкарпетки(вiн має бути або 23 або 25 або 27 або 29 або 31): ";
                    cin >> socks_Size;
                }
            socks_actions(socks_Size);
            cout << endl;
            cout << "______________________________________________________________________" << endl;
        }else if(input == 'a'){
            cout << "Ви викликали функцiю 9.3" << endl;
            cout << "Введiть натуральне число N(воно має бути вiд 0 до 7483650): ";
            cin >> N;
            while (N < 0 || N > 7483650)
                  {
                      cout << "Не вiрне значення(число N має бути вiд 0 до 7483650) " << endl;
                      cout << "Введiть натуральне число N(воно має бути вiд 0 до 7483650): ";
                      cin >> N;
                  }
            cout << bin_zero_counter(N) << " - результат виконання." << endl;
            cout << "______________________________________________________________________" << endl;
        }else if(input == 's' || input == 'S')
        {
            cout << "Вихiд з програми..."<< endl;
            break;
        }
        else {
            cout << "Невiрно введений ключ. \a" << endl;
       }
    }

    return 0;
}
