#include <iostream>
using namespace std;


int main()
{
	string student[4][4] = {
		{"������", "19", "����: 66", "����: 68"},
		{"������", "20", "����: 73", "����: 94"},
		{"�谡��", "19", "����: 58", "����: 37"},
		{"������", "20", "����: 82", "����: 29"}
	};

	cout << "���̸� �Է����ּ���\n";
	
	string age;
	cin >> age;

	for (int i = 0; i < 4; i++)
	{
		if (student[i][1] == age)
		{
			cout << student[i][0] << " " << student[i][3] << "\n";
		}

	}

	return 0;
}