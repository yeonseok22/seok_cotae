#include <iostream>

using namespace std;

class box {
public:
    int x, y, width, height;
};

int range_sum(int a, int b)
{
    int sum = 0;
    for (int i = a; i <= b; i++) {
        sum += i;
    }

    return sum;
}

int main(void)
{
    int a = 10, b = 20;
    cout << a << endl;
    
    int answer = range_sum(a, b);

    cout << answer << endl;
    
    return 0;
}