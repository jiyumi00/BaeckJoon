#include<iostream>
using namespace std;

double calculation(double num1, double num2) {
	return num1/num2;
}
int main() {
	double num1, num2,result;
	cin >> num1;
	cin >> num2;

	result = calculation(num1, num2);
	cout.precision(32);
	cout << result;
	return 0;
}