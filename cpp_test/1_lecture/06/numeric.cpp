#include <iostream>
#include <numeric>

using namespace std;

int main(void)
{
	int a = std::gcd(10, 15);	// 5
	int b = std::lcm(10, 15);	// 30

	cout << a << b << "\n";
	return 0;
}
