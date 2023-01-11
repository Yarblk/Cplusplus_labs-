#include <iostream>
using namespace std;

int main()
{
    char n;
input:
    cout << "Введіть першу літеру країни: ";
    cin >> n;

    switch (n) {
    case 'u': cout << "Населлення: 44 мільйона\n Кількість міст: > 410 "; break;
    case 'p': cout << "Населлення: 38 мільйона\n Кількість міст: > 230 "; break;
    case 'g': cout << "Населлення: 83 мільйона\n Кількість міст: > 2064 "; break;
    case 'o': cout << "Населлення: 75 мільйона\n Кількість міст: > 200 "; break;
    case 'r': cout << "Населлення: 183 мільйона\n Кількість міст: > 4000 "; break;
    case 'h': cout << "Населлення: 23 мільйона\n Кількість міст: > 150 "; break;
    case 'k': cout << "Населлення: 32 мільйона\n Кількість міст: > 832 "; break;

    default: cout << "Error\n"; goto input;
    }
}