#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    // 벡터 생성
    vector<int> v1;         // empty int vector
    vector<int> v2(10);     // initialize 0, size = 10
    vector<int> v3(10, 1);  // initialize 1, size = 10
    vector<int> v4 {10, 20, 30, 40, 50};    // uniform initialization

    vector<int> v5(v4);     // make v5 to copy v5
    vector<int> v6(v4.begin(), v4.begin() +3);  // v4[0] ~ v4[2] copy

    for (int i = 0; i < v6.size(); i++) {
        cout << v6[i] << " ";
    }
    cout << "\n";
    
    cout << v4.capacity() << ":" << v4.size() <<"\n";

    v4.push_back(60);
    cout << v4.capacity() << ":" << v4.size() << "\n";

    v4.push_back(70);
    cout << v4.capacity() << ":" << v4.size() << "\n";

    v4.insert(v4.begin(), 0);
    cout << v4.capacity() << ":" << v1.size() << "\n";

    v4.erase(v4.begin() + 1, v4.begin() + 3);
    cout << v4.capacity() << ":" << v4.size() << "\n";

    for (int i = 0; i < v4.size(); i++) {
        cout << v4[i] << ", ";
    }

    return 0;
}