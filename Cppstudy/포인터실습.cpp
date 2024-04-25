#include <iostream>
using namespace std;
#define max_arr  5

void reverse(int *arr)
{

	for (int i = max_arr - 1 ; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}

}

int main()
{
	int arrlist[max_arr] = { 10, 20, 30, 40, 50 };

	reverse(&arrlist[0]); // &arrlist[0]

	return 0;
}