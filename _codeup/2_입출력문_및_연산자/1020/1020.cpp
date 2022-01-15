#include <iostream>

using namespace std;

int main(void)
{
    int first, last;
    cin >> first;
    cin.ignore(256, '-');
    cin >> last;

    cout.width(6);
    cout.fill('0');
    cout << first;
    
    cout.width(7);
    cout.fill('0');
    cout << last << endl;

    return 0;
}