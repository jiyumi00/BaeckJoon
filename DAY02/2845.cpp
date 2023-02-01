#include<iostream>
using namespace std;

int calculate(int people, int area) {
	return people * area;
}
int main() {
	int people,area,articleCount,realCount;
	int totalCount[5]={0,};
	int arr_len = sizeof(totalCount) / sizeof(totalCount[0]);

	cin >> people>> area;
	realCount = calculate(people, area);
	for (int i = 0; i < arr_len; i++) {
		cin >> articleCount;
		totalCount[i] = articleCount - realCount;
	}
	for (int i = 0; i < arr_len; i++) {
		cout << totalCount[i]<<' ';
	}
	
}