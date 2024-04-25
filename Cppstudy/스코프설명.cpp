#include <iostream>
using namespace std;


void changeValue(int x) {

	x = 20;
}

// 중괄호는 공간(스코프)을 구분해주는 역할을 함 변수나 메모리들이 존재할 수 있는 공간을 만들어줌
// 각 중괄호에 있는 요소들은 서로 겹치지 않는다 다 다른 공간에 있으니까

int main() {

	int x = 10;

	cout << "x before function call: " << x << endl;

	changeValue(x); //값을 가져오는것 복사해서 오는거

	cout << "x after function call: " << x << endl;

	if (x == 10)
	{
		int x = 10;
		cout << "n in if_grammar" << x << endl;
	} // 여기서의 x는 그 위에 있는 다른 x들과는 상관 없이 코드 블럭 안에 있는 x를 사용한다
	// 근데 만약에 if문 중괄호 안에있는것들이 사라지면 그 위에서 선언한 x를 사용한다

	//중괄호 안에 있는 x가 밖으로 나올수는 없다

			return 0;
}

// 즉, 각 공간에서 할당했던 변수들은 중괄호를 나가게되는 순간 사라진다

// GLOBAL 변수는 가장 먼저 사용됨
// 그래서 이름 지을 때 앞에 global을 붙여서 지어주기도 함
// 전역에 변수를 해당한게 글로벌변수 이건 스코프와 상관없이 다 실행이된다
// 근데 그렇다고 덮어쓰는것이 할당이 안되는건 아니기때문에 실행이 된 후에 맨 첫째 값이 글로벌 값이 들어가는거지
// 그 뒤에 새로운 값을 넣어주면 그걸로 덮어쓰여진다