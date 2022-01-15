#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int num, temp;
    vector<int> data = {10000, 1000, 100, 10, 1};
    cin >> num;

    for (int i = 0; i < data.size(); i++) {
        temp = num / data[i];
        cout << "[" << temp * data[i] << "]" << "\n";
        num %= data[i];
    }

    return 0;
}