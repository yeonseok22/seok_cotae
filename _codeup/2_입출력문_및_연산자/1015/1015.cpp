#include <iostream>

using namespace std;

int main(void)
{
    float f;
    cin >> f;

    cout << fixed;      // 소수점 고정
    cout.precision(2);  // 소수점 둘째 자리까지

    cout << f << endl;

    return 0;
}