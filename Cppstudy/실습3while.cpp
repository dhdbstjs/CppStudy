#include <iostream>

// 5�� ���
//int main()
//{
//	std::cout << "5�� ���\n";
//
//	int i = 1;
//	while (i <= 9)
//	{
//		std::cout << "5 * " << i << " = " << 5 * i << "\n";
//		i++;
//	}
//}

// 1~9�� ���
int main()
{
	std::cout << "1~9�� ���\n";

	int i = 1;
	int j = 1;

	while (i <= 9)
	{
		std::cout << "----" << i << "�� ----\n";
		j = 1;

		while (j <= 9)
		{
			std::cout << i << " * " << j << " = " << i * j << "\n";
			j++;
		}
		i++;

	}
}