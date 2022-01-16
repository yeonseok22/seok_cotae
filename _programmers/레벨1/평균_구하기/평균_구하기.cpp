#include <iostream>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    for (int i = 0; i < arr.size(); i++) {
        answer += static_cast<double>(arr[i]) / arr.size();
    }
    return answer;
}

int main(void) {
    vector<int> arr1 = {1, 2, 3, 4};
    vector<int> arr2 = {5, 5};

    double answer1 = solution(arr1);
    double answer2 = solution(arr2);
    cout << answer1 << endl;
    cout << answer2 << endl;
}