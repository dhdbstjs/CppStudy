#include <iostream>
using namespace std;

int main()
{
	cout << "행과 열의 수를 입력하세요: ";

	int rows, cols;

	cin >> rows >> cols;

	int** array = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		array[i] = new int[cols];
	}

	cout << "행렬 원소를 입력하세요: \n";

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cin >> array[i][j];
		}
	}


	// 각 행의 합
	cout << "각 행의 합: \n";
	for (int i = 0; i < rows; ++i)
	{
		int rowSum = 0;
		for (int j = 0; j < cols; ++j)
		{
			rowSum += array[i][j];
		}
		cout << "행" << i+1 << ": " << rowSum << "\n";
	}
	cout << endl;


	// 각 열의 합
	cout << "각 열의 합: \n";
	for (int j = 0; j < cols; ++j)
	{
		int colSum = 0;
		for (int i = 0; i < rows; ++i)
		{
			colSum += array[i][j];
		}
		cout << "열" << j+1 << ": " << colSum << "\n";
	}
	cout << endl;


	// 동적 배열 초기화
	// 열에 할당된 메모리는 각 행의 메모리 블록에 대한 포인터일 뿐이기 때문에 별도로 할당된 메모리 블록이 아님
	// 행의 메모리 해제함에따라 열의 메모리도 해제됨
	for (int i = 0; i < rows; ++i) {
		delete[] array[i];
	}
	delete[] array;

	return 0;
}