#include <iostream>
#include <string>

using namespace std;

string reverse(const string& str)
{
	if (str.length() == 0)
		return "";
	else
		return reverse(str.substr(1)) + str[0];
}

int main(void)
{
    string str, answer;
	cin >> str;

	answer = reverse(str);

	cout << answer << "\n";

	return 0;
}
