#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    short a1 = 3;
    float b1 = 0.707;
    float pi = 3.14;

    double res = pow(((0.5 * sin((log(pow(exp(1), (b1 + a1)))) * (pi / 8))) + 1.308 * cos(log(pow(exp(1), (a1 - b1))) * pi / 8)), 2.0 / 3);

    cout << res << endl;

    short a2 = 2;
    float b2 = 13.13;

    double res2 = pow((((1 - exp(a2)) / b2) * cos(b2 / a2 * pi) + log((0.708) * b2)), (1.0 / 3));

    cout << res2;

    return 0;
}
