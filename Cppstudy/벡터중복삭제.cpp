#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> myVector = { 10, 20, 30, 20, 40, 10, 50 };

    sort(myVector.begin(), myVector.end());

    // unique ( begin(), end() ) -> 중복요소 벡터 끝으로 옮김
    // erase -> 특정 요소 삭제

    // unique는 sort로 정렬을 한 후에 쓸 것!
    // 왼쪽부터 비교하면서 중복값을 맨 뒤로 보내줄 수 있도록 하려고 (unique 기능)
    // 정렬을 안하면 비교를 진행하는 와중에 나중에 현재 비교값보다 더 작은 값이 또 나왔을 경우 문제 생길 수 있음

    myVector.erase(unique(myVector.begin(), myVector.end()) , myVector.end());

    // 결과 출력
    cout << "중복 제거 결과: ";
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }
    cout << endl;

    return 0;
}