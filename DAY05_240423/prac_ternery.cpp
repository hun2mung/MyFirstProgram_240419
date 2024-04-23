#include <iostream>
using namespace std;

int main() {

	int a;
	cin >> a;
	(a % 5 == 0) ? cout << a << "는 5의 배수입니다." : cout << a << "는 5의 배수가 아니네요ㅜㅜ.";

	return 0;
}