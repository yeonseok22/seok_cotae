#include <iostream>

using namespace std;

int main(void)
{
    int scores[5] = {50, 60, 70, 80, 90};

    int size = sizeof(scores) / sizeof(scores[0]);
    // int size = size(scores);

    int s = 0;
    for (int i = 0; i < size; i++) {
        s += scores[i];
    }

    double d = double(s / size);

    cout << "mean scores : " << d << endl;

    return 0;
}