#include <iostream>
using namespace std;
 int main (){
    float i=2,sum;
    while (i<=69)
    {
        sum = sum + 1/i;
        i += 1;
    }
    cout << sum;
    return 0;
 }