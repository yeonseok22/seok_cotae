#include <iostream>

using namespace std;

long long int factorial(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * factorial(n - 1);
}

int main(void)
{
	int ip;
	long long int answer;
	cout << "숫자를 입력해 주세요." << "\n";
	cin >> ip;

	answer = factorial(ip);

	cout << answer << "\n";

	return 0;
}

// n = 5 -> 120
// n = 10 -> 3628800
// n = 20 -> 2432902008176640000
