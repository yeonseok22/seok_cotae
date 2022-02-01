#include <iostream>
#include <stack>

using namespace std;

bool paran_check(const string& s)
{
	stack<char> stk;

	for (char c : s) {
		if (c == '(' || c == '{' || c == '[') {
			stk.push(c);
		} else {
			if (stk.empty() ||
					(stk.top() == '(' && c != ')') ||
					(stk.top() == '{' && c != '}') ||
					(stk.top() == '[' && c != ']'))
				return false;

			stk.pop();
		}
	}

	return stk.empty();
}

int main(void)
{
	// 올바른 괄호
	cout << paran_check("(){}[]") << "\n";
	cout << paran_check("((((()))))") << "\n";
	cout << paran_check("(){[()]}") << "\n";

	// 올바르지 않은 괄호
	cout << paran_check("((({}))") << "\n";
	cout << paran_check(")(") << "\n";
	cout << paran_check("({)}") << "\n";

	return 0;
}
