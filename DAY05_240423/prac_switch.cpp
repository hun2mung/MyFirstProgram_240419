using namespace std;

#include <iostream>

int main() {

	int a, b;
	char oper;

	cin >> a >> b >> oper;

	switch (oper)
	{
	case '+' :
		cout << a + b;
		break;
	case '-':
		cout << a - b;
		break;
	case '/':
		cout << a / b;
		break;
	case '%':
		cout << a % b;
		break;
	default:
		break;
	}

	return 0;

}