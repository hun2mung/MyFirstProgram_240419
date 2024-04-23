#include <iostream>
using namespace std;

int main() {

	cout << "5단 출력" << endl;
	for (int i = 1; i <= 9; i++) {
		cout << "5 * " << i << " = " << 5 * i << endl;
	}

	cout << endl;

	for (int j = 1; j <= 9; j++) {
		cout << "----" << j << "단 ----" << endl;
		for (int i = 1; i <= 9; i++) {
			cout << j << " * " << i << " = " << j * i << endl;
		}
	}
	
	return 0;
}