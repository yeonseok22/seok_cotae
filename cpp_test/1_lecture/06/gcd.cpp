#include <iostream>

using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

int main(void)
{
	int a, b, answer;
	cin >> a >> b;

	answer = gcd(a, b);

	cout << answer << "\n";

	return 0;
}
