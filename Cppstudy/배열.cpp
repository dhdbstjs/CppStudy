#include <iostream>
using namespace std;

void main()
{
	int intArray[5] = { 6, 7, 8, 9, 10 };

	int arraySize = sizeof(intArray) / sizeof(intArray[0]);

	// for-each: �迭�� ��� ��Ҹ� ó������ ������ Ž��

	int target_min = 2; // �ε��� ��ȣ �ּҰ�
	int target_max = 4; // �ε��� ��ȣ �ִ밪
	int loop_count = 0;

	for (int num : intArray)//intArray�� �迭 0���ε������� 1�� �����ϸ鼭 ���������� �ݺ�
	{
		if (loop_count > target_min && loop_count < target_max)
		{
			cout << num << endl;
		}
		loop_count++;
	}

	for (int i = 0; i < arraySize; i++)
	{
		cout << intArray[i] << endl;
	}
}



	else
	{
		for (int i = 0; i < arraySize; i++)
		{
			if (inputcity == city[i])
			{
				cout << "[" << i << "] " << city[i];
				break;
			}


			else
			{
				cout << "�Է� ����";
				break;
			}
		}
	}