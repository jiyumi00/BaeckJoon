#include<iostream>
using namespace std;

int calculation(int num1, int num2) {
	return num2 - num1;
}
int main() {
	int num1, num2, numerator, denominator;
	cin >> num1;
	cin >> num2;
	numerator = calculation(num1, num2);
	denominator = num2;

	cout << numerator<<' ';
	cout << denominator;
}