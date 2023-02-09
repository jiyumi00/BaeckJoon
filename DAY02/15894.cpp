#include<iostream>
using namespace std;

long calculation(long rectangleCount) {
	return rectangleCount*4;
}
int main() {
	long rectangleCount,result ;

	cin >> rectangleCount;
	result = calculation(rectangleCount);
	cout << result;
	return 0;
}