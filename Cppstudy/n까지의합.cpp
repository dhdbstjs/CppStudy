#include <iostream>

int main()
{
	std::cout << "����(���� ����)�� �Է��ϼ��� : ";

	int num;
	int result = 0;

	std::cin >> num;

	for (int i = 1; i <= num; i++)
	{
		result = result + i;
	}

	std::cout << "1���� " << num << "������ ���� : " << result;
}