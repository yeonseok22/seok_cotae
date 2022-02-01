#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

string reverse(const string& str)
{
	stack<char> stk;

	for (char c : str) {
		stk.push(c);
	}

	string res;

	while (!stk.empty()) {
		res += stk.top();
		stk.pop();
	}

	return res;
}

template <typename T>
void reverse(vector<T>& vec)
{
	stack<T> stk;
	for (const auto& e : vec) {
		stk.push(e);
	}

	// stack<T, vector<T>> stk(vec);

	for (int i = 0; i < vec.size(); i++) {
		vec[i] = stk.top();
		stk.pop();
	}
}

int main(void)
{
	string str1 = "HELLO";
	string str2 = "ALGORITHM";

	cout << str1 << " -> " << reverse(str1) << "\n";
	cout << str2 << " -> " << reverse(str2) << "\n";

	vector<int> vec {10, 20, 30, 40, 50,};
	vector<string> vec2 {"John", "loves", "Jane"};

	reverse<int>(vec);
	reverse<string>(vec2);

	for (auto e : vec) {
		cout << e << ", ";
	}
	cout << "\n";

	for (auto e : vec2) {
		cout << e << ", ";
	}
	cout << "\n";


	return 0;
}
