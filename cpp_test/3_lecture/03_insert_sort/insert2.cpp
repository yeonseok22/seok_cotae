// <vector>, <algorithm> 사용함
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int i, j, len, num;
	cin >> len;

	vector<int> arr(len, 0);

	// 입력하기
	for (i = 0; i < len; i++)
		cin >> arr[i];

	// 정렬하기
	for (i = 0; i < len; i++) {
		j = i;
		while(j > 0 && arr[j - 1] > arr[j]) {
			swap(arr[j - 1], arr[j]);
			j--;
		}
	}

	// 출력하기
	for (i = 0; i < len; i++)
		cout << arr[i] << ", ";
	cout << "\n";

	return 0;
}
