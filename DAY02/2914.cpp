#include<iostream>
using namespace std;

int calculation(int songCount, int average) {
	return songCount * (average - 1) + 1;
}
int main()
{
	int songCount, average;
	int melodyCount;
	cin >> songCount >> average;

	melodyCount = calculation(songCount, average);

	cout << melodyCount;
}
