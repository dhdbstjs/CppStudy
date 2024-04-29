#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> myVector = { 10, 20, 30, 20, 40, 10, 50 };

    sort(myVector.begin(), myVector.end());

    // unique ( begin(), end() ) -> 중복요소 벡터 끝으로 옮김
    // erase -> 특정 요소 삭제
    myVector.erase(unique(myVector.begin(), myVector.end()) , myVector.end());

    // 결과 출력
    cout << "중복 제거 결과: ";
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }
    cout << endl;

    return 0;
}