#include<iostream>
using namespace std;

int calculation(int num,int i) {
	return num * i;
}
int main() {
	int num=0,result=0;

	cin >> num;
	for (int i = 1; i < 10; i++) {
		result = calculation(num,i);
		cout << num<< " * " << i  <<" = " << result << endl;
	}
}