// 작성자 : 이동훈
// 작성일자 : 240422

#include <iostream>

using namespace std;
// 세미콜론은 언제 나오나? "실행"되는 단위마다

// 프로그램에서 1개만 존재하고 가장 먼저 "실행"되는 "함수"
int main() {
	// 콘솔문자 "출력"
	cout << "hello world!\n";

	// int : 자료형, 정수(integer)
	// num : 변수명
	// char은 1byte 이므로 유니코드인 한글은 2byte를 요구하기 때문에 사용 불가.
	// string 문자열 입력 가능.
	int num;
	char word = 'A';
	
	string sentence = "DongHun";	// sentence 메모리 할당, 변수 "선언"과 동시에 값을 넣는다 = "초기화"한다
	sentence = "test";

	// 콘솔문자 "입력"
	cin >> num;

	int MyNameIsLee; // 카멜 표기법
	int my_name_is_Lee;	// 스네이크 표기법

	char num1 = 'A';
	char num2 = 'B';

	int sum = num1 + num2;

	cout << num1 + num2 << endl;	// endl: endline
	cout << sum << endl;
	cout << "줄바꿈.\n";

	return 0;
}	