// 병합 정렬
// - 분할 정복에 의한 정렬 알고리즘의 하나로,
// 입력 배열을 두 개의 부분 배열로 분할하여 부분 배열을 재귀적으로 정렬한다.
// - 부분 배열을 병합한다.
// - 이때, 병합된 배열의 원소가 정해진 정렬 순서에 부합되도록 순서를 조정

#include <iostream>

using namespace std;

int buff[256];

void merge(int data[], int left, int mid, int right)
{
	int i = left, j = mid + 1, k = left;

	while (i <= mid && j <= right) {
		if (data[i] <= data[j])
			buff[k++] = data[i++];
		else
			buff[k++] = data[j++];
	}

	while (i <= mid)
		buff[k++] = data[i++];

	while (j <= right)
		buff[k++] = data[j++];

	for (int x = left; x <= right; x++)
		data[x] = buff[x];
}


void merge_sort(int data[], int left, int right)
{
	if (left < right) {
		int mid = (left + right) / 2;
		merge_sort(data, left, mid);
		merge_sort(data, mid + 1, right);
		merge(data, left, mid, right);
	}
}

int main(void)
{
	int data[] = { 2, 6, 7, 4, 1, 8, 5, 3 };
	merge_sort(data, 0, 7);

	for (auto n : data)
		cout << n << ", ";
	cout << "\n";

	return 0;
}
