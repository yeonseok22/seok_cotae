// c style
#include <iostream>

using namespace std;

// swap 함수 : call by reference (주소를 argument로 변경!)
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int min, idx;
	int array[10] = {};

	cout << "10개의 숫자를 입력해 주세요" << "\n";

	// 입력하기
	for (int i = 0; i < 10; i++) 
		cin >> array[i];

	// 정렬하기
	for (int i = 0; i < 10; i++) {
		min = 999999;
		for (int j = i; j < 10; j++) {
			if (min > array[j]) {
				min = array[j];
				idx = j;
			}
		}

		swap(array[i], array[idx]);
	}

	// 출력하기
	for (int i = 0; i < 10; i++) 
		cout << array[i] << ", ";
	cout << "\n";

	return 0;
}
