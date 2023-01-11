#include <iostream>
using namespace std;
int main()
{
    double array[10];
    double average = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "Введіть натуральне число: ";
        cin >> array[i];
        average += array[i] * array[i];
    }
    average /= 10;
    cout << average;
}