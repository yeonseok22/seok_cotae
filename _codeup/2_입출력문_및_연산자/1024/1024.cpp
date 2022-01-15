#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string data;
    cin >> data;

    for (int i = 0; i < data.size(); i++) {
        cout << "\'" << data[i] << "\'" << endl;
    }

    return 0;
}