#include <iostream>

using namespace std;

// 메모리를 자동으로 해제하는 동적 배열 클래스
template <typename T>
class DynamicArray {
private:
    unsigned int arr_size;      // 배열의 길이는 음수가 아님
    int* arr;

public:
    DynamicArray(int n): arr_size(n) {
        arr = new int[arr_size] {};     // 메모리 할당
    }

    ~DynamicArray() { delete [] arr; }  // 자동으로 메모리 해제(소멸자)

    unsigned int size() { return arr_size; }    // size() 메서드

    int& operator[] (const int i) { return arr[i]; }    // [] 연산자 오버로딩
    const int& operator[] (const int i) const { return arr[i]; }
};

int main(void)
{
    DynamicArray<int> da(10);
    da[0] = 10;
    da[1] = 20;
    da[2] = 30;

    for (int i = 0; i < da.size(); i++) {
        cout << da[i] << endl;
    }
    cout << endl;

    return 0;
}