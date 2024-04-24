#include <iostream>
//
//// 5단 출력
//int main()
//{
//	std::cout << "5단 출력\n";
//
//	for (int i = 1; i <= 9; i++)
//	{
//		std::cout << "5 * " << i << " = " << 5 * i << "\n";
//	}
//}

// 1~9단 출력
int main()
{
	std::cout << "1~9단 출력\n";

	for (int i = 1; i <= 9; i++)
	{
		std::cout << "----" << i << "단 ----\n";

		for (int j = 1; j <= 9; j++)
		{
			std::cout << i << " * " << j << " = " << i * j << "\n";
		}
	}
}