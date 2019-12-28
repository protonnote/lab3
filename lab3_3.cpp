#include <iostream>
using namespace std;
 int main (){
    float i=6,sum;
    while (i<=19)
    {
        sum = sum + 1/i;
        i++;
    }
    cout << sum;
    return 0;
 }