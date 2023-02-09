#include<iostream>
using namespace std;

int calculate(int origin_piece, int piece) {
	return  origin_piece-piece;
}
int main() {
	int piece;
	int origin_piece[6] = { 1,1,2,2,2,8 };
	int output_piece[6] = { 0, };
	int arr_len = sizeof(origin_piece) / sizeof(origin_piece[0]);

	for (int i = 0; i < arr_len; i++) {
		cin >> piece;
		output_piece[i] = calculate(origin_piece[i], piece);
	}
	for (int i = 0; i < arr_len; i++) {
		cout << output_piece[i]<<' ';
	}
	
}