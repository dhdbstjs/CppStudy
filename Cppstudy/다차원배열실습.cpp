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



// ��ó�� define ����
/*
#include <iostream>
#define ROW_SIZE 5
#define COL_SIZE 4
using namespace std;
int main()
{
	//int dim2Array1[5][4] = { 0 };
	int dim2Array2[ROW_SIZE][COL_SIZE] = { 0 };
	for (int i = 0; i < ROW_SIZE; i++)
	{
		for (int j = 0; j < COL_SIZE; j++)
		{
		}
	}
}

*/