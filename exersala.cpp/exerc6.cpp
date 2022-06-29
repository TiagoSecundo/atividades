#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main()
{
    double cateto_op=0.0, cateto_ad=0.0;

    cin >> cateto_op;
    cin >> cateto_ad;
    

    cout << hypot(cateto_op, cateto_ad);

    return 0;
}