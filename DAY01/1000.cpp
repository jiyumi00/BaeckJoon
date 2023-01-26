#include<iostream>
using namespace std;

int sum(int first_num, int second_num) {
	return first_num + second_num;
}
int main()
{
	int first_num, second_num;
	int result;
	cin >> first_num >> second_num;
	
	result = sum(first_num, second_num);
	
	cout << result;
}
