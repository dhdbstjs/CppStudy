#include <iostream>

using namespace std;

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