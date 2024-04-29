#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

int main()
{
	// test_vec1 //

	vector<int> test_vec1(1);

	clock_t start_vec1 = clock();

	for (int i = 1; i <= 100000000; ++i)
	{
		test_vec1.push_back(i);
	}

	clock_t end_vec1 = clock();

	cout << "tset_vec1 소요시간: " << end_vec1 - start_vec1 << "ms" << "\n";


	// test_vec2 //

	vector<int> test_vec2(1);
	test_vec2.reserve(100000000);

	clock_t start_vec2 = clock();

	for (int i = 1; i <= 100000000; ++i)
	{
		test_vec2.push_back(1);
	}

	clock_t end_vec2 = clock();

	cout << "test_vec2 소요시간: " << end_vec2 - start_vec2 << "ms" << "\n";

	return 0;
}
