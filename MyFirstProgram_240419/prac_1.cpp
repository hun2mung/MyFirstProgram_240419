using namespace std;

#include <iostream>


int main() {

	string name;
	int age;

	cout << "이름을 입력하세요.\n";
	cin >> name;
	
	cout << "나이를 입력하세요.\n";
	cin >> age;
	
	cout << "안녕하세요! " << name << "님" << "(" << age << "세)\n";

	return 0;
}