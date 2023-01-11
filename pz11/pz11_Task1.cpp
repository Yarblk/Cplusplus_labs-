#include <iostream>
using namespace std;
int main()
{
	const int length = 12;
	int m[length] = { 1, 3, 5, 7, 9, 11, 2, 4, 6, 8, 0, 10 };
	for (int i = 0; i < length; i++) {
		cout << m[i] << endl;
	}
	cout << "-----------------------------\n";
	int buff = 0;

	for (int startIndex = 0; startIndex < length - 1; ++startIndex)
	{

		int smallestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			if (m[currentIndex] < m[smallestIndex])
				smallestIndex = currentIndex;
		}
		std::swap(m[startIndex], m[smallestIndex]);
	}

	for (int j = 0; j < length; j++) {
		cout << m[j] << endl;
	}
	cout << "-----------------------------\n";
	for (int startIndex = 0; startIndex < length - 1; ++startIndex)
	{

		int biggestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			if (m[currentIndex] > m[biggestIndex])
				biggestIndex = currentIndex;
		}
		std::swap(m[startIndex], m[biggestIndex]);
	}

	for (int j = 0; j < length; j++) {
		cout << m[j] << endl;
	}
}