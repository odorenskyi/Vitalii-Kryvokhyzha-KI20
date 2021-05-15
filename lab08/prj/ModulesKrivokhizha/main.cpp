#include <cmath>
#include <iostream>

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
        cout << "Binary Zero - ";
        return BinZero;
    }else{
        cout << "Binary One - ";
        return BinOne;
    }
}
