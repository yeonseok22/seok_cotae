#include <iostream>

using namespace std;

int main(void)
{
    int hour, min, sec;
    cin >> hour;
    cin.ignore(256, ':');
    cin >> min;
    cin.ignore(256, ':');
    cin >> sec;

    cout << min << "\n";

    return 0;
}