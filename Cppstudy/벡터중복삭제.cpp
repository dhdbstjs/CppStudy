#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> myVector = { 10, 20, 30, 20, 40, 10, 50 };

    sort(myVector.begin(), myVector.end());

    // unique ( begin(), end() ) -> �ߺ���� ���� ������ �ű�
    // erase -> Ư�� ��� ����
    myVector.erase(unique(myVector.begin(), myVector.end()) , myVector.end());

    // ��� ���
    cout << "�ߺ� ���� ���: ";
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }
    cout << endl;

    return 0;
}