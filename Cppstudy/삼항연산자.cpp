#include <iostream>

int main()
{
	std::cout << "숫자를 입력해주세요\n";

	int num;

	std::cin >> num;

	(num % 5 == 0) ? std::cout << num << "은 5의 배수입니다\n" : std::cout << num << "은5의 배수가 아니네요\n";

}