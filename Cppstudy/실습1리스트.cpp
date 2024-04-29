#include <iostream>
#include<list>
#include<algorithm>
using namespace std;

int main()
{
	list<int> myList = { 5, 4, 3, 4, 2, 1, 1 };

	int count4 = count(myList.begin(), myList.end(), 4);

	cout << "4는 " << count4 << "개 입니다\n";

	cout << "정렬 후: ";
	myList.sort();
	for (int num : myList) {
		cout << num << " ";
	}

	cout << "\n";

	cout << "중복 제거 후: ";
	myList.unique();
	for (int num : myList) {
		cout << num << " ";
	}

	cout << "\n";

	cout << "뒤에 6, 7 추가: ";
	myList.push_back(6);
	myList.push_back(7);
	for (int num : myList) {
		cout << num << " ";
	}

	cout << "\n";

	cout << "앞에 0 추가: ";
	myList.push_front(0);
	for (int num : myList) {
		cout << num << " ";
	}

	return 0;

}