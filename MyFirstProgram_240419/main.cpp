// �ۼ��� : �̵���
// �ۼ����� : 240422

#include <iostream>

using namespace std;
// �����ݷ��� ���� ������? "����"�Ǵ� ��������

// ���α׷����� 1���� �����ϰ� ���� ���� "����"�Ǵ� "�Լ�"
int main() {
	// �ֹܼ��� "���"
	cout << "hello world!\n";

	// int : �ڷ���, ����(integer)
	// num : ������
	// char�� 1byte �̹Ƿ� �����ڵ��� �ѱ��� 2byte�� �䱸�ϱ� ������ ��� �Ұ�.
	// string ���ڿ� �Է� ����.
	int num;
	char word = 'A';
	
	string sentence = "DongHun";	// sentence �޸� �Ҵ�, ���� "����"�� ���ÿ� ���� �ִ´� = "�ʱ�ȭ"�Ѵ�
	sentence = "test";

	// �ֹܼ��� "�Է�"
	cin >> num;

	int MyNameIsLee; // ī�� ǥ���
	int my_name_is_Lee;	// ������ũ ǥ���

	char num1 = 'A';
	char num2 = 'B';

	int sum = num1 + num2;

	cout << num1 + num2 << endl;	// endl: endline
	cout << sum << endl;
	cout << "�ٹٲ�.\n";

	return 0;
}	