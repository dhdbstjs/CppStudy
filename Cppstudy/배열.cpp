#include <iostream>
using namespace std;

void main()
{
	int intArray[5] = { 6, 7, 8, 9, 10 };

	int arraySize = sizeof(intArray) / sizeof(intArray[0]);

	// for-each: 배열의 모든 요소를 처음부터 끝까지 탐색

	int target_min = 2; // 인덱스 번호 최소값
	int target_max = 4; // 인덱스 번호 최대값
	int loop_count = 0;

	for (int num : intArray)//intArray는 배열 0번인덱스부터 1씩 증가하면서 끝날때까지 반복
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
				cout << "입력 오류";
				break;
			}
		}
	}