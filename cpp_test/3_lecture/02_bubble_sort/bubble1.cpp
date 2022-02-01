// old style
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
	int arr[10] = {};
	cout << "10개의 숫자를 입력하세요" << "\n";

	// 배열 입력하기
	for (int i = 0; i < 10; i++)
		cin >> arr[i];

	// 정렬하기
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j+1]);
			}
		}
	}

	// 출력하기
	for (int i = 0; i < 10; i++)
		cout << arr[i] << ", ";
	cout << "\n";

	return 0;
}
