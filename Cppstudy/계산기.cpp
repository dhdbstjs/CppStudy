#include<iostream>

int main()
{
	std::cout << "ù ��° ���� �Է��ϼ���\n";
	int num1;
	std::cin >> num1;

	std::cout << "�� ��° ���� �Է��ϼ���\n";
	int num2;
	std::cin >> num2;

	std::cout << "�����ڸ� �Է��ϼ���\n";
	char opr;
	std::cin >> opr;

	switch (opr)
	{
	case '+':
		std::cout << num1 + num2;
		break;

	case '-':
		std::cout << num1 - num2;
		break;
	
	case '*':
		std::cout << num1 * num2;
		break;

	case '/':
		if (num1 and num2 == 0)
		{
			std::cout << "0���� ���� �� �����ϴ�\n";
			break;
		}
		else
		{
			std::cout << num1 / num2;
			break;
		}

	if (opr != '+' or '-' or '*' or '/')
		std::cout << "�����ڸ� �߸� �Է��ϼ̽��ϴ�.\n";

	}

}

// �������� �������� float ���°� ���� �� �ֱ� ������ �ڷ����� float���� �����Ұ�!
// switch�� int �ų� enum ���¸� ���� �� �ִ� �׷��� �����ڸ� string���� ������ �� ����
// char�� ���������� �ƽ�Ű�ڵ带 ���� ���ڷ� �ٲ� �� �ֱ⶧���� ������