#include<iostream>
using namespace std;

int main() {
	int num1 = 0, num2 = 0;
	cin >> num1;
	cin >> num2;

	if (num1 > num2) {
		cout << ">";
	}
	else if (num1 < num2) {
		cout << "<";
	}
	else {
		cout << "==";
	}
	return 0;
}