#include <iostream>
using namespace std;

// 5단 출력
int main()
{
	std::cout << "5단 출력\n";

	int i = 1;
	while (i <= 9)
	{
		std::cout << "5 * " << i << " = " << 5 * i << "\n";
		i++;
	}
}

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


// 실습 4

int main()
{
	cout << "사용자가 입력한 숫자 더하기\n";

	int num = 1;
	int result = 0;


	while (num != 0)
	{

		cout << "숫자를 입력하세요 (0: exit) : ";
		cin >> num;
		result += num;

	}

	cout << "사용자가 입력한 수의 합은 : " << result << "\n";
}


// 별찍기

int main()
{
	cout << "input : ";

	int star;
	cin >> star;

	for (int i = 0; i < star; i++)
	{
		for (int j = 0; j < star - i; j++) cout << "*";
		{

			cout << "\n";
		}
	}

}