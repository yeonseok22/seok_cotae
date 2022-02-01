// <vector>, <algorithm> 사용
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void swap2(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	vector<int> arr(10);
	cout << "10개의 숫자를 입력해 주세요." << "\n";

	// 배열 입력하기
    for (int i = 0; i < arr.size(); i++)
		cin >> arr[i];

	// 정렬하기
	for (int i = 0; i < arr.size(); i++) {
		for (int j = 0; j < arr.size() - 1 - i; j++) {
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}
	}

	// 출력하기
	for (int i = 0; i < arr.size(); i++)
		cout << arr[i] << ", ";
	cout << "\n";

	return 0;
}
