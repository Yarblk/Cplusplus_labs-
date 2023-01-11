#include <iostream>
using namespace std;
int main()
{
	const int length = 12;
	int m[length] = { -1, 3, -5, 7, -9, 11, -2, 4, -6, 8, 0, 10 };
	for (int i = 0; i < length; i++) {
		cout << m[i] << endl;
	}
	cout << "-----------------------------\n";

	int biggestIndex = 0;

	for (int j = 0; j < length; ++j)
	{
		if (m[j] > m[biggestIndex])
			biggestIndex = j;
	}
	for (int j = 0; j < biggestIndex; ++j)
	{
		if (m[j] < 0) {
			m[j] = 0;
		}
	}
	for (int i = 0; i < length; i++) {
		cout << m[i] << endl;
	}
	cout << "-----------------------------\n";
}
