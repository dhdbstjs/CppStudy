#include <iostream>

int main()
{
	std::cout << "숫자(양의 정수)를 입력하세요 : ";

	int num;
	int result = 0;

	std::cin >> num;

	for (int i = 1; i <= num; i++)
	{
		result = result + i;
	}

	std::cout << "1부터 " << num << "까지의 합은 : " << result;
}