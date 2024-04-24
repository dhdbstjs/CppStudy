#include <iostream>

int main()
{
	std::cout << "나이를 입력하세요\n";

	int age;

	std::cin >> age;

	if (1 <= age and age <= 7)
	{
		std::cout << "유아";
	}
	else if (8 <= age and age <= 13)
	{
		std::cout << "초등학생";
	}
	else if (14 <= age and age <= 16)
	{
		std::cout << "중학생";
	}
	else if (17 <= age and age <= 19)
	{
		std::cout << "고등학생";
	}
	else if (20 <= age and age <= 199)
	{
		std::cout << "성인";
	}
	else if (200 <= age)
	{
		std::cout << "나이가 너무 많습니다";
	}
}

// if문과 else if문을 사용할 때 else if문일경우는
// 위의 조건을 참고하면서 조건을 더 간략히 줄 수 있다
// 
//if (age <= 7)
//{
//	std::cout << "유아";
//}
//	else if (age <= 13)
//	{
//		std::cout << "초등학생";
//	}