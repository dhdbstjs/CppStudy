#include<iostream>

int main()
{
	std::cout << "첫 번째 수를 입력하세요\n";
	int num1;
	std::cin >> num1;

	std::cout << "두 번째 수를 입력하세요\n";
	int num2;
	std::cin >> num2;

	std::cout << "연산자를 입력하세요\n";
	char opr;
	std::cin >> opr;

	switch (opr)
	{
	case '+':
		std::cout << num1 + num2;
		break;

	case '-':
		std::cout << num1 - num2;
		break;
	
	case '*':
		std::cout << num1 * num2;
		break;

	case '/':
		if (num1 and num2 == 0)
		{
			std::cout << "0으로 나눌 수 없습니다\n";
			break;
		}
		else
		{
			std::cout << num1 / num2;
			break;
		}

	if (opr != '+' or '-' or '*' or '/')
		std::cout << "연산자를 잘못 입력하셨습니다.\n";

	}

}

// 나눗셈은 정답으로 float 형태가 나올 수 있기 때문에 자료형을 float으로 설정할것!
// switch는 int 거나 enum 형태만 넣을 수 있다 그래서 연산자를 string으로 선언할 수 없음
// char은 내부적으로 아스키코드를 통해 숫자로 바뀔 수 있기때문에 가능함