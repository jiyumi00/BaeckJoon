#include<iostream>
using namespace std;

int main() {
	int testNum,repetNum;
	string letter="";
	cin >> testNum;
	for (int i = 0; i < testNum; i++) {
		cin >> repetNum;
		cin >> letter;

		for (int j = 0; j < letter.length(); j++) {
			for (int k = 0; k < repetNum; k++) {
				cout << letter[j];
			}
		}
		cout << '\n';
	}
	return 0;
}