#include<iostream>
using namespace std;

int main() {
	int num_arr[9]={0,};
	int num = 0,max=0,maxIndex=0;
	for (int i = 0; i < 9; i++) {
		cin >> num;
		num_arr[i] = num;
		if (max < num_arr[i]) {
			max = num_arr[i];
			maxIndex = i + 1;
		}
	}
	cout << max<<endl;
	cout << maxIndex;

}