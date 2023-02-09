#include<iostream>
using namespace std;

int calculation(int openYear,int currentYear) {
	return currentYear -openYear;
}
int main() {
	int openYear=1946, currentYear, anniversary;

	cin >> currentYear;
	anniversary = calculation(openYear, currentYear);
	cout << anniversary;

	return 0;
}