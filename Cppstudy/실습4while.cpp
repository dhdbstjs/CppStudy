#include <iostream>

using namespace std;

int main()
{
	cout << "사용자가 입력한 숫자 더하기\n";

	int num = 1;
	int result = 0;


	while (num != 0)
	{
		
		cout << "숫자를 입력하세요 (0: exit) : ";
		cin >> num;
		result += num;

	}

	cout << "사용자가 입력한 수의 합은 : " << result << "\n";
}