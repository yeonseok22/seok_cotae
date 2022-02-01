#include <iostream>

using namespace std;

// 동적 메모리 할당 : dynamic memory allocation
// 프로그램 실행 중 필요한 크기의 memory size를 allocation하여 사용하는 기법
// 동적으로 할당한 메모리는 사용이 끝나면 명시적으로 allocation된 메모리를 해제해야 한다.

// C 언어 : malloc() 또는 calloc()함수로 메모리 할당, free() 함수로 메모리 해제
// C++ 언어 : new 연산자 -> 메모리 할당, delete 연산자 ->apahfl gowp(rnjswkd)

int main(void)
{
    int n;
    cin >> n;

    // 동적 배열 할당 및 초기화
    int* ptr = new int[n] {};
    ptr[0] = 10;
    ptr[1] = 20;

    // ptr를 배열처럼 사용
    for (int i = 0; i < n; i++) {
        cout << ptr[i] << endl;
    }

    // 동적 배열 해제
    delete [] ptr;
    ptr = nullptr;      // 권장하는 바!
}