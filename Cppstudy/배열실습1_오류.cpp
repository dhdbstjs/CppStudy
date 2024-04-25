#include <iostream>
using namespace std;

int main()
{
	string city[] = { "한국", "japan", "영국", "미국", "태국" };

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

	// cin을 두번 입력해서 계속 오류났던것!!!!

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
		cout << "입력 오류";
	}

	return 0;
}
