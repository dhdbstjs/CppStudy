#include <iostream>

int main()
{
	std::cout << "���ڸ� �Է����ּ���\n";

	int num;

	std::cin >> num;

	(num % 5 == 0) ? std::cout << num << "�� 5�� ����Դϴ�\n" : std::cout << num << "��5�� ����� �ƴϳ׿�\n";

}