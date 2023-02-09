#include<iostream>
using namespace std;

int minCaculation(int total_sec) {
	return  total_sec/60;
}
int secCaculation(int total_sec) {
	return total_sec % 60;
}
int main() {
	int input_sec;
	int total_sec=0;
	int output_min, output_sec;

	for (int i = 0; i < 4; i++) {
		cin >> input_sec;
		total_sec +=input_sec;
	}
	output_min = minCaculation(total_sec);
	output_sec = secCaculation(total_sec);
	cout << output_min<<'\n';
	cout << output_sec;
}