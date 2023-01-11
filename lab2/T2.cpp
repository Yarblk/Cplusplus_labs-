#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int x, y;

	cout << "Введіть кординати точки: \n";
	cin >> x >> y;

	if (pow(x, 2) + pow(y, 2) <= sqrt(4 + 4))
	{
		cout << "Точка попадає";
	}
	else
	{
		cout << "Не попадає";
	}
}