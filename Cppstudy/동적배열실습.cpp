#include <iostream>
using namespace std;

int main()
{
	int studentnum;
	cout << "����� �л��� ����� ���� �� �Է��ϼ���\n";
	cin >> studentnum;

	int* score_arr = new int[studentnum];

	int score_sum = 0;

	for (int i = 0; i < studentnum; i++)
	{
		cout << i + 1 << "�� �л��� ������ �Է��ϼ���: ";
		cin >> score_arr[i];
		score_sum += score_arr[i];
	}

	float avg;
	avg = (float)score_sum / (float)studentnum;

	cout << "���� ���: " << avg;

	delete[] score_arr;

}