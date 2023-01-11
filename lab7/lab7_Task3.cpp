#include <iostream>
using namespace std;
int main()
{
    int a, b, h;
    double x, y;
    cout << "Введіть a, b, h\n";
    cin >> a >> b >> h;

    cout << "--------------------\n";
    cout << ":  X  :      Y     :\n";
    cout << "--------------------\n";
    while (a <= b)
    {
        x = a;

        if (x <= 1 && x >= -1) {
            y = pow(x, 1 / 4) - 8 * sin(x);
            cout << ":  " << x << "  :  " << y << "  :\n";
            cout << "--------------------\n";
            a += h;
        }
        else {
            cout << "\nЗначення x не відповідає ОДЗ.";
            break;
        }

    }
}