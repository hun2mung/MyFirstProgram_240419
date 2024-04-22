#include <iostream>

using namespace std;

int main()
{
	// && : AND, || : OR, ! : NOT

	//int cnt;

	//cnt++;	// 후위 연산자
	//++cnt;	// 전위 연산자
	//cnt--;
	//--cnt;

	int age;

	cout << "나이를 입력하세요.";
	cin >> age;

	if (age >= 1 and age <= 7)
	{
		cout << "유아";
	}
	else if (age >= 8 and age <= 13) {
		cout << "초등학생";
	}
	else if (age >= 14 and age <= 16) {
		cout << "중학생";
	}
	else if (age >= 17 and age <= 19) {
		cout << "고등학생";
	}
	else if (age >= 20) {
		cout << "성인";
	}
	else if (age > 200) {
		cout << "나이가 너무 많습니다..!";
	}
	else {
		
	}



	return 0;
}