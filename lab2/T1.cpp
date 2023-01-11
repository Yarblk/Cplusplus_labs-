#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x, a, b, c;
    float alpha, beta;
    float Y = 0.0f;


    cout << "Enter  x, a, b, c, alpha, beta: \n";
    cin >> x >> a >> b >> c >> alpha >> beta;


    if (x >= 1.5)
    {
        float Y = (((pow(x, 3) + 3 * a) * c) / (a - b + x));
    }
    else
    {
        float Y = pow(sin(alpha), 2) * pow(cos(beta), 2);
    }

    cout << "Answer " << Y;

    return 0;
}