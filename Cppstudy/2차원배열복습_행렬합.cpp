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
		int colSum = 0; // 메모리 사용을 줄이기위해서 for문 밖으로 빼주고 for문 밖에서 colSum = 0으로 초기화해주는 방법도 있다.
		for (int i = 0; i < rows; ++i)
		{
			colSum += array[i][j];
		}
		cout << "열" << j+1 << ": " << colSum << "\n";
	}
	cout << endl;

	delete[] array;

	return 0;
}