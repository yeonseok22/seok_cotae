// c style
#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int i, j;
	int arr[10] = {};

	// 배열 입력하기
	for (i = 0; i < 10; i++)
		cin >> arr[i];

	// 정렬하기
	for (i = 0; i < 9; i++) {
		j = i;
		while (j >= 0 && arr[j] > arr[j + 1]) {
			swap(arr[j], arr[j + 1]);
			j--;
		}
	}

	// 출력하기
	for (i = 0; i < 10; i++)
		cout << arr[i] << ", ";
	cout << "\n";

	return 0;
}
