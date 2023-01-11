#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;

input:

    cout << "Введіть трицифрове число: ";
    cin >> n;
    if (n < 99)
    {
        goto input;
    }

    int num[] = { n / 100, (n - (n / 100) * 100) / 10, n - (n / 10) * 10 };
    int result = 0;

    for (int i = 0; i < 3; i++) {

        cout << num[i] << endl;
        if ((num[i] > 2) && ((num[i] % 2) != 0)) {
            result += num[i];
        }
    }

    cout << "\nРезультат: " << result;

}