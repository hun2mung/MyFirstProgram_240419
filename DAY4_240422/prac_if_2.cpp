// 240422 이동훈
using namespace std;

#include <iostream>

int main() 
{
	// 이름
	string name;

	cout << "이름을 입력하세요.\n";

	cin >> name;

	if (name == "홍길동") {
		cout << "남자\n";
	}
	else if (name == "성춘향") {
		cout << "여자\n";
	}
	else {
		cout << "모르겠어요.\n";
	}

	return 0;
}
