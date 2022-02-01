// <vector>, <algorithm> 이용
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> arr(10);

int main(void)
{
	int min, idx;

	cout << "숫자를 입력하세요" << "\n";

	// 배열 입력하기
	for (int i = 0; i < arr.size(); i++)
		cin >> arr[i];

	// 정렬하기
	for (int i = 0; i < arr.size(); i++) {
		min = 99999;

		for (int j = i; j < arr.size(); j++) {
			if (min > arr[j]) {
				min = arr[j];
				idx = j;
			}
		}

		swap(arr[i], arr[idx]);
	}

	// 출력하기
	for (int i = 0; i < arr.size(); i++)
		cout << arr[i] << ", ";
	cout << "\n";

	return 0;
}

