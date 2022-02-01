// <vector> 사용하기
#include <iostream>
#include <vector>

using namespace std;

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int min, idx;

	vector<int> array(10);
	
	// 배열 입력하기
	for (int i = 0; i < array.size(); i++)
		cin >> array[i];

	// 정렬하기
	for (int i = 0; i < array.size(); i++) {
		min = 99999;
		for (int j = i; j < array.size(); j++) {
			if (min > array[j]) {
				min = array[j];
				idx = j;
			}
		}
		swap(array[i], array[idx]);
	}

	// 출력하기
	for (int i = 0; i < array.size(); i++)
		cout << array[i] << ", ";
	cout << "\n";

	return 0;
}
