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

//����� �ʿ���� �Լ�
//����� ���̵忩�� �Է��� ���ϴ°��� �ƴ�!
void PrintSomething(string message)
{
	cout << message << endl;
}

int main()
{
	int ten = GetTen(); //�Լ��� ���� �Ŀ� ()�� �ٿ���� �Լ���� �ν���
	                    //�̷��� �ϸ� ten�� 10�� ���Ŷ� �Ȱ���! return 10 �̴ϱ�

	int num1, num2;
	cin >> num1 >> num2;

	cout << IntSum(num1, num2);
	int result = IntSum(1, 2);
	// �ΰ��� �޾ƿ;� �ϴ� �Լ��� ()�ȿ� �� �־�����Ѵ�!
	// 30, 31 �� �� ���� �� �ٸ��� ���� ����

	PrintSomething("Neuron");
}

//�Լ� �ȿ� cin ����� ���� ���� ������, �̷��� �Ǹ� �и��� �ȴٴ� �Լ��� ������ �츮�Ⱑ �����
// ������ �����ϸ� main������ ����� �޾ƺ��� ���·� �ϴ°��� ����!