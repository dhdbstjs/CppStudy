#include <iostream>
using namespace std;

int main()
{
	cout << "��� ���� ���� �Է��ϼ���: ";

	int rows, cols;

	cin >> rows >> cols;

	int** array = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		array[i] = new int[cols];
	}

	cout << "��� ���Ҹ� �Է��ϼ���: \n";

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cin >> array[i][j];
		}
	}


	// �� ���� ��
	cout << "�� ���� ��: \n";
	for (int i = 0; i < rows; ++i)
	{
		int rowSum = 0;
		for (int j = 0; j < cols; ++j)
		{
			rowSum += array[i][j];
		}
		cout << "��" << i+1 << ": " << rowSum << "\n";
	}
	cout << endl;


	// �� ���� ��
	cout << "�� ���� ��: \n";
	for (int j = 0; j < cols; ++j)
	{
		int colSum = 0; // �޸� ����� ���̱����ؼ� for�� ������ ���ְ� for�� �ۿ��� colSum = 0���� �ʱ�ȭ���ִ� ����� �ִ�.
		for (int i = 0; i < rows; ++i)
		{
			colSum += array[i][j];
		}
		cout << "��" << j+1 << ": " << colSum << "\n";
	}
	cout << endl;

	delete[] array;

	return 0;
}