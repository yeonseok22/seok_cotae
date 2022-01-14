#include <iostream>
#include <array>

using namespace std;

const int NUM = 5;

int main(void)
{
    array<int, NUM> data = {};

    int s = 0;

    cout << "5개의 숫자를 입력하세요" << "\n";
    for (int i = 0; i < data.size(); i++) {
        cin >> data[i];
    }

    for (int i = 0; i < data.size(); i++) {
        cout << data[i] << ", ";
    }

    cout << "\n";

    // mean
    for (int i = 0; i < data.size(); i++) {
        s += data[i];
    }

    double mean = static_cast<double>(s) / data.size();

    cout << mean << "\n";
    
    return 0;
}