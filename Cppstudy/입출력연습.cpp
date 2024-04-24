#include <iostream>

int main()
{
	std::cout << "이름을 입력하세요\n";

	std::string name;

	std::cin >> name;

	std::cout << "나이를 입력하세요\n";

	int age;

	std::cin >> age;

	std::cout << "안녕하세요! " << name << "님(" << age << "세)";
}