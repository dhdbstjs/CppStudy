#include <iostream>
using namespace std;
#define max_arr  5

// 배열 인덱스 사용O
//void reverse(int *arr)
//{
//
//	for (int i = max_arr - 1 ; i >= 0; i--)
//	{
//		cout << arr[i] << " ";
//	}
//
//}


//배열 인덱스 사용X
void reverse(int *arr)
{
	int *pointer = arr + max_arr - 1;

	for (; pointer >= arr; pointer--)
	{
		cout << *pointer << " ";
	}

}

int main()
{
	int arrlist[max_arr] = { 10, 20, 30, 40, 50 };

	reverse(&arrlist[0]); // &arrlist[0]

	return 0;
}