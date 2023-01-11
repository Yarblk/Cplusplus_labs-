#include <iostream>
using namespace std;
int main()
{
    int x;

    for (int i = 0; i < 5; i++)
    {
        cout << "Введіть x: ";
        cin >> x;
        double y = pow(sin(x), 5) +
            ((5 * x - 1.5) > 0 ? (5 * x - 1.5) : (5 * x - 1.5) * (-1));
        cout << "y = " << y << "\n";
    }
}