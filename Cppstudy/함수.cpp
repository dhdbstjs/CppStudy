#include <iostream>
using namespace std;


int GetTen()
{
	return 10;
}

int IntSum(int n1, int n2)
{
	return n1 + n2;
}

//출력이 필요없는 함수
//출력이 보이드여도 입력을 못하는것은 아님!
void PrintSomething(string message)
{
	cout << message << endl;
}

int main()
{
	int ten = GetTen(); //함수를 써준 후에 ()를 붙여줘야 함수라고 인식함
	                    //이렇게 하면 ten에 10이 들어간거랑 똑같다! return 10 이니까

	int num1, num2;
	cin >> num1 >> num2;

	cout << IntSum(num1, num2);
	int result = IntSum(1, 2);
	// 두개를 받아와야 하는 함수는 ()안에 꼭 넣어줘야한다!
	// 30, 31 둘 다 같은 것 다르게 쓰는 형태

	PrintSomething("Neuron");
}

//함수 안에 cin 기능을 넣을 수는 있지만, 이렇게 되면 분리가 된다는 함수의 장점을 살리기가 힘들다
// 때문에 웬만하면 main문에서 결과를 받아보는 형태로 하는것이 좋다!