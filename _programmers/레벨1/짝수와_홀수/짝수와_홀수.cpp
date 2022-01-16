#include <iostream>
#include <string>

using namespace std;

string solution(int num) {
    string answer = "";

    if (num % 2 == 0) {
        answer = "Even";
    }
    else {
        answer = "Odd";
    }
    return answer;
}

int main(void)
{
    int n1 = 3, n2 = 4;
    cout << solution(n1) << "\n";
    cout << solution(n2) << "\n";

    return 0;
}