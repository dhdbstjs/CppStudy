#include <iostream>

int main()
{
	std::cout << "���̸� �Է��ϼ���\n";

	int age;

	std::cin >> age;

	if (1 <= age and age <= 7)
	{
		std::cout << "����";
	}
	else if (8 <= age and age <= 13)
	{
		std::cout << "�ʵ��л�";
	}
	else if (14 <= age and age <= 16)
	{
		std::cout << "���л�";
	}
	else if (17 <= age and age <= 19)
	{
		std::cout << "����л�";
	}
	else if (20 <= age and age <= 199)
	{
		std::cout << "����";
	}
	else if (200 <= age)
	{
		std::cout << "���̰� �ʹ� �����ϴ�";
	}
}

// if���� else if���� ����� �� else if���ϰ���
// ���� ������ �����ϸ鼭 ������ �� ������ �� �� �ִ�
// 
//if (age <= 7)
//{
//	std::cout << "����";
//}
//	else if (age <= 13)
//	{
//		std::cout << "�ʵ��л�";
//	}