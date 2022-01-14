#include <iostream>
#include <string>

using namespace std;

// 타입 정의
// C ~ C++03 : typedef 사용 
// C++11 ~ : using 사용
// using 문법이 더 쉽고, 템플릿 별칭(template alias)도 지원


int main(void)
{
    using uchar = unsigned char;
    using pis = pair<int, string>;
    using da10 = double[10];
    using func = void(*)(int);

    template <typename T>
    using matrixId = vector<T>;

    // example
    da10 arr {};
    matrixId<double> vec(5);
    func fp = &my_function;
}