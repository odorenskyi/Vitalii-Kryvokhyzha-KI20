#include <cmath>
#include <iostream>
#include <cstring>
#include <fstream>
#include <ctime>
#include <bitset>

using namespace std;

float s_calculation(float x, float y, float z)
{
    const double PI = 3.141592653589793;
    float S = 1.0/2.0 * pow(x,2) - sqrt(abs(pow(y + z, 2) - pow(x,5))) - log(abs(sin(z)));
    S = int(S*100 + 0.5)/100.0;

    return S;
}

void bofort_actions(int bofortBal)
{
   /* while (bofortBal > 12 || bofortBal < 0){
        cout << "¬ведiть бал Ѕофорта(вiн маЇ бути вiд 0 до 12): ";
        cin >> bofortBal;
    }*/

    switch(bofortBal) {
        case 0: cout << "Ўвидкiсть вiтру: < 0.3 м/c. ’арактеристика вiтру Ч Ўтиль"; break;
        case 1: cout << "Ўвидкiсть вiтру: 0.3 - 1.5 м/c. ’арактеристика вiтру Ч “ихий"; break;
        case 2: cout << "Ўвидкiсть вiтру: 1.6 Ч 9.4 м/c. ’арактеристика вiтру Ч Ћегкий"; break;
        case 3: cout << "Ўвидкiсть вiтру: 9.4 Ч 5.4 м/c. ’арактеристика вiтру Ч —лабкий"; break;
        case 4: cout << "Ўвидкiсть вiтру: 5.5 -7.9 м/c. ’арактеристика вiтру Ч ѕомiрний"; break;
        case 5: cout << "Ўвидкiсть вiтру: 8.0 Ч 10.7 м/c. ’арактеристика вiтру Ч —вiжий"; break;
        case 6: cout << "Ўвидкiсть вiтру: 10.8 Ч 13.8 м/c. ’арактеристика вiтру Ч —ильний"; break;
        case 7: cout << "Ўвидкiсть вiтру: 13.9 Ч 17.1 м/c. ’арактеристика вiтру Ч ћiцний"; break;
        case 8: cout << "Ўвидкiсть вiтру: 17.2 Ч 20.7 м/c. ’арактеристика вiтру Ч ƒуже мiцний"; break;
        case 9: cout << "Ўвидкiсть вiтру: 20.8 Ч 24.4 м/c. ’арактеристика вiтру Ч Ўторм"; break;
        case 10: cout << "Ўвидкiсть вiтру: 24.5 Ч 28.4 м/c. ’арактеристика вiтру Ч —ильний шторм"; break;
        case 11: cout << "Ўвидкiсть вiтру: 28.5 Ч 32.6 м/c. ’арактеристика вiтру Ч Ўквальний шторм"; break;
        case 12: cout << "Ўвидкiсть вiтру: >= 32.7 м/c. ’арактеристика вiтру Ч ”раган(буревiй)"; break;
    }
}

void socks_actions(int ukrSystem){
    switch(ukrSystem) {
        case 23:
            cout << "розмiр шкарпеток за системою —Ўј Ч 8, за системою ™— Ч 37/38";
            break;
        case 25:
            cout << "розмiр шкарпеток за системою —Ўј Ч 9, за системою ™— Ч 39/40";
            break;
        case 27:
            cout << "розмiр шкарпеток за системою —Ўј Ч 10, за системою ™— Ч 41/42";
            break;
        case 29:
            cout << "розмiр шкарпеток за системою —Ўј Ч 11, за системою ™— Ч 43/44";
            break;
        case 31:
            cout << "розмiр шкарпеток за системою —Ўј Ч 12, за системою ™— Ч 45/46";
            break;
        default:
            cout << "¬ведiть iнший розмiр шкарпеток";
            break;
    }
}

int bin_zero_counter(int number){
    int mask = 1;
    int mask_2 = 1;

    int BinOne = 0;
    int BinZero = 0;

    for(int i = 0; i < (log2(number)); i++){
        if(!(number & mask))
            BinZero++;
        else
            BinOne++;
        mask<<=1;
    }

    if(!(number & (mask_2 << 7))){
        cout << "Binary One - ";
        return BinOne;
    }else{
        cout << "Binary Zero - ";
        return BinZero;
    }
}

void task10_1()
{
    string path_1 = "in_File.txt";
    string path_2 = "out_File.txt";
    string text1 = "як парость виноградноњ лози, плекайте мову.\nѕильно й ненастанно пол≥ть бур'€н.\n„ист≥ша в≥д сльози вона хай буде.\n¬≥рно ≥ слухн€но нехай вона щоразу служить вам.\n’оч ≥ живе своњм живим житт€м.";
    string text2;
    char c;
    int pos = 0;

    cout << text2 << endl;
    ofstream out_File;
    ifstream in_File;
    out_File.open(path_2, ofstream::app);
    in_File.open(path_1);

    if(!out_File.is_open())
    {
        cout << "ѕомилка вiдкритт€ файлу!\n";
    }
    else{
        cout << "”спiшне вiдкритт€ файлу\n";
        out_File << "Krivokhizha Vitalii. CNTU 2021. Ukraine. Kropivnitskii. (c)\n";
        int a = rand() % 90 + 10;
        out_File << a << "\n";

        if(!in_File.is_open())
        {
            cout << "ѕомилка вiдкритт€ файлу!";
        }
        else{
            while(!in_File.eof())
            {
                in_File.get(c);
                text2 += c;
            }

            pos = text2.find(text1);
            if(pos != -1)
            {
                out_File << "ѕомилок в текстi не маЇ" << "\n";
            }
            else{
                out_File << "ƒопущенi помилки в текстi" << "\n";
            }
        }
    }

    out_File.close();
    in_File.close();
}

void task10_2()
{
    string path_1 = "in_File.txt";
    ofstream in_File;
    in_File.open(path_1, ios_base::app);

    if(!in_File.is_open())
    {
        cout << "ѕомилка вiдкритт€ файлу!\n";
    }
    else
    {
        cout << "”спiшне вiдкритт€ файлу\n";
        time_t     now = time(0);
        struct tm  tstruct;
        char       buf[80];
        tstruct = *localtime(&now);
        strftime(buf, sizeof(buf), "%d.%m.%Y", &tstruct);

        in_File << "\n\nƒата дозапису iнформацiњ: " << buf;
    }
    in_File.close();
}

void task10_3()
{
    string path_1 = "out_File.txt";
    ofstream out_File;
    int x = 0;
    int y = 0;
    int z = 0;
    int b = 0;

    out_File.open(path_1, ios_base::app);

    if(!out_File.is_open())
    {
        cout << "ѕомилка вiдкритт€ файлу!";
    }

    else
    {
        cout << "”спiшне вiдкритт€ файлу\n";

        while(x < 1)
        {

            cout << "”ведiть число x, €ке бiльше за 1: ";
            cin >> x;
        }

        while(y < 1)
        {
            cout << "”ведiть число y, €ке бiльше 1: ";
            cin >> y;
        }

        while(z < 1)
        {

            cout << "”ведiть число z, €ке бiльше за 1: ";
            cin >> z;
        }

        while(b <= 1)
        {
            cout << "”ведiть натуральне число b: ";
            cin >> b;
        }

        out_File << "\n";
        out_File << "–езультат S = " << s_calculation(x, y, z) << endl;

        out_File << "„исло b у двiйковому кодi = " << bitset<32>(b) << endl;
    }
    out_File.close();
}
