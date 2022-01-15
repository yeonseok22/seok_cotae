#include <iostream>

using namespace std;

int main(void)
{
    int year, mon, day;
    cin >> year;
    cin.ignore(256, '.');
    cin >> mon;
    cin.ignore(256, '.');
    cin >> day;

    cout.width(2);
    cout.fill('0');
    cout << day << '-';

    cout.width(2);
    cout.fill('0');
    cout << mon << '-';

    cout.width(4);
    cout.fill('0');
    cout << year << "\n";

    return 0;
}