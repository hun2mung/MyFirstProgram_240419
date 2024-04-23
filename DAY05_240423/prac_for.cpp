#include <iostream>
using namespace std;

int main() {

	int loop_count = 1234;

	for (int i = 0; i < 5; i++) {
		cout << "Iteration : " << i + 1 << endl;
	}

	for (int j = 0; j < 10000; j++) {
		cout << j << endl;
	}
	return 0;
}