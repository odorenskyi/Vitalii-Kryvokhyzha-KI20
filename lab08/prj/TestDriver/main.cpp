#include <iostream>
#include "ModulesKrivokhizha.h"

using namespace std;

int main()
{
    float x[10] = {1, 1, 3, 2, 4, 3, 2, 0.5, 15, 1};
    float y[10] = {1, 2, 2, 2, 3, 5, 4, 3, 1, 1.25};
    float z[10] = {1, 3, 1, 2, 1, 1, 1, 1, 1, 2};
    float S[10] = {-1.05, -2.43, -10.61, -1.89, -23.57, -9.7, -0.46, -3.69, -758.74, -2.49};

    for(int i = 0; i < 10; i++){
        if(s_calculation(x[i], y[i], z[i]) == S[i]){
            cout << "x = " << x[i] << ", y = " << y[i] << ", z = " << z[i] << endl;
            cout << "Passed - testing result = " << S[i] << endl;
        }
        else{
            cout << "Testing result - " << s_calculation(x[i], y[i], z[i]) << endl;
            cout << "Failed - testing result != " << S[i] << endl;
        }
    }

    getchar();
    return 0;
}
