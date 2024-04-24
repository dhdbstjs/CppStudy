#include <iostream>

// 5단 출력
//int main()
//{
//	std::cout << "5단 출력\n";
//
//	int i = 1;
//	while (i <= 9)
//	{
//		std::cout << "5 * " << i << " = " << 5 * i << "\n";
//		i++;
//	}
//}

// 1~9단 출력
int main()
{
	std::cout << "1~9단 출력\n";

	int i = 1;
	int j = 1;

	while (i <= 9)
	{
		std::cout << "----" << i << "단 ----\n";
		j = 1;

		while (j <= 9)
		{
			std::cout << i << " * " << j << " = " << i * j << "\n";
			j++;
		}
		i++;

	}
}