#include <iostream>

using namespace std;

int main(void)
{
    int hour, min;
    cin >> hour;            // hour 입력
    cin.ignore(256, ':');   // : 나올 때까지 기다리기
    cin >> min;             // min 입력

    cout << hour << ':' << min << "\n";

    return 0;
}