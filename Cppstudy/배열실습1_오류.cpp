#include <iostream>
using namespace std;

int main()
{
	string city[] = { "�ѱ�", "japan", "����", "�̱�", "�±�" };

	int arraySize = sizeof(city)/sizeof(city[0]);

	string inputlist;
	cin >> inputlist;


	if (inputlist == "list")
	{
		for (string ct : city)
		{
			cout << ct << endl;
		}
	}

	//string inputcity;
	//cin >> inputcity;

	// cin�� �ι� �Է��ؼ� ��� ����������!!!!

	bool found = false;

	for (int i = 0; i < arraySize; i++)
	{
		if (inputlist == city[i])
		{
				cout << "[" << i << "] " << city[i] << endl;
				found = true;
				break;
		}
	}

	if (!found)
	{
		cout << "�Է� ����";
	}

	return 0;
}
