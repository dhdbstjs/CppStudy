#include <iostream>
using namespace std;

int main()
{
	cout << "input : ";

	int num;
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		for(int j = 0; j < num - i; j++) cout << "*";
		{
			
			cout << "\n";
		}
	}

}