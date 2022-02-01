#include <iostream>
#include <array>

using namespace std;

// std::array 특징
// C 스타일 배열처럼 사용할 수 있는 []연산자 오버로딩을 제공
// 대입 연산자 지원(깊은 복사)
// 배열 크기를 정확하게 알 수 있다. array::size()
// 반복자 지원

// std::array 단점
// 배열의 크기를 명시적으로 지정해야 한다.
// 항상 스택 메모리를 사용한다.
// 고정 크기 배열이 아닌 가변 크기 배열을 더 선호함. -> std::vector를 더 많이 사용하는 이유

int main(void)
{
    array<int, 5> scores = {50, 60, 70, 80, 90};

    int s = 0;
    for (int i = 0; i < scores.size(); i++) {
        s += scores[i];
    }

    double d = double(s / scores.size());

    cout << d << endl;

    return 0;
}