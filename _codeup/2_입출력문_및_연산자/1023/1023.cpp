#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int integer, fraction;
    cin >> integer;
    cin.ignore(256, '.');
    cin >> fraction;

    cout << integer << "\n" << fraction << "\n";

    return 0;
}