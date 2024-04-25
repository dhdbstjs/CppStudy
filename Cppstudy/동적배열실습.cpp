#include <iostream>
using namespace std;

int main()
{
	int studentnum;
	cout << "몇명의 학생의 평균을 구할 지 입력하세요\n";
	cin >> studentnum;

	int* score_arr = new int[studentnum];

	int score_sum = 0;

	for (int i = 0; i < studentnum; i++)
	{
		cout << i + 1 << "번 학생의 성적을 입력하세요: ";
		cin >> score_arr[i];
		score_sum += score_arr[i];
	}

	float avg;
	avg = (float)score_sum / (float)studentnum;

	cout << "성적 평균: " << avg;

	delete[] score_arr;

}