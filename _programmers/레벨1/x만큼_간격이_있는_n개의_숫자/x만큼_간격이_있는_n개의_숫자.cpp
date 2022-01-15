#include <iostream>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    int temp;

    for (int i = 1; i <= n; i++) {
        temp = x * i;
        answer.push_back(temp);
    }
    return answer;
}

int main(void)
{
    int x1 = 2, n1 = 5;
    int x2 = 4, n2 = 3;
    int x3 = -4, n3 = 2;

    vector<long long> v1 = solution(x1, n1);
    vector<long long> v2 = solution(x2, n2);
    vector<long long> v3 = solution(x3, n3);

    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < v3.size(); i++) {
        cout << v3[i] << " ";
    }
    cout << endl;
}