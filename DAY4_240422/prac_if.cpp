#include <iostream>

using namespace std;

int main()
{
	// && : AND, || : OR, ! : NOT

	//int cnt;

	//cnt++;	// ���� ������
	//++cnt;	// ���� ������
	//cnt--;
	//--cnt;

	int age;

	cout << "���̸� �Է��ϼ���.";
	cin >> age;

	if (age >= 1 and age <= 7)
	{
		cout << "����";
	}
	else if (age >= 8 and age <= 13) {
		cout << "�ʵ��л�";
	}
	else if (age >= 14 and age <= 16) {
		cout << "���л�";
	}
	else if (age >= 17 and age <= 19) {
		cout << "����л�";
	}
	else if (age >= 20) {
		cout << "����";
	}
	else if (age > 200) {
		cout << "���̰� �ʹ� �����ϴ�..!";
	}
	else {
		
	}



	return 0;
}