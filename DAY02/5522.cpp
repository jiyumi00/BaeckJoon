#include<iostream>
using namespace std;

int main() {
	int inputNum;
	int totalNum=0;

	for (int i = 0; i < 5; i++) {
		cin >> inputNum;
		if (inputNum >= 0 && inputNum <= 100) {
			totalNum += inputNum;
		}
	}
	cout << totalNum;
}