#include <iostream>
using namespace std;

// 5�� ���
int main()
{
	std::cout << "5�� ���\n";

	int i = 1;
	while (i <= 9)
	{
		std::cout << "5 * " << i << " = " << 5 * i << "\n";
		i++;
	}
}

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


// �ǽ� 4

int main()
{
	cout << "����ڰ� �Է��� ���� ���ϱ�\n";

	int num = 1;
	int result = 0;


	while (num != 0)
	{

		cout << "���ڸ� �Է��ϼ��� (0: exit) : ";
		cin >> num;
		result += num;

	}

	cout << "����ڰ� �Է��� ���� ���� : " << result << "\n";
}


// �����

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