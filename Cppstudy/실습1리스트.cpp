#include <iostream>
#include<list>
#include<algorithm>
using namespace std;

int main()
{
	list<int> myList = { 5, 4, 3, 4, 2, 1, 1 };

	int count4 = count(myList.begin(), myList.end(), 4);

	cout << "4�� " << count4 << "�� �Դϴ�\n";

	cout << "���� ��: ";
	myList.sort();
	for (int num : myList) {
		cout << num << " ";
	}

	cout << "\n";

	cout << "�ߺ� ���� ��: ";
	myList.unique();
	for (int num : myList) {
		cout << num << " ";
	}

	cout << "\n";

	cout << "�ڿ� 6, 7 �߰�: ";
	myList.push_back(6);
	myList.push_back(7);
	for (int num : myList) {
		cout << num << " ";
	}

	cout << "\n";

	cout << "�տ� 0 �߰�: ";
	myList.push_front(0);
	for (int num : myList) {
		cout << num << " ";
	}

	return 0;

}