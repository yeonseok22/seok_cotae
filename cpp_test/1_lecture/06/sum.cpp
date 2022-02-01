#include <iostream>

using namespace std;

int sum(int n)
{
	if (n == 1) {
		return 1;
	}
	else {
		return n + sum (n - 1);
	}
}

int main(void)
{
	int num, answer;
	cin >> num;
	
	answer = sum(num);

	cout << answer << "\n";

	return 0;
}

