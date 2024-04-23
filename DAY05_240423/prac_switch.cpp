using namespace std;

#include <iostream>

int main() {

	float a, b;
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
	case '*':
		cout << a * b;
		break;
	case '/':
		cout << a / b;
		break;
	case '%':
		cout << int(a) % int(b);
		break;
	default:
		break;
	}

	return 0;

}