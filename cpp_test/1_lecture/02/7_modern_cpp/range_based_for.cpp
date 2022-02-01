#include <iostream>
#include <vector>

using namespace std;

int main(void) 
{
    vector<int> numbers { 10, 20, 30 };

    for (int n: numbers) {
        cout << n << endl;
    }

    for (auto& n : numbers) {
        cout << n << endl;
    }

    for (auto iter = begin(numbers); iter < end(numbers) ; ++iter) {
        cout << iter << endl;
    }

    string strs[] = {"I", "love", "you"};

    for (const auto& s : strs) {
        cout << s << " ";
    }
    cout << endl;
}