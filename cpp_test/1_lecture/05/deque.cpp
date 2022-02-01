#include <iostream>
#include <deque>

using namespace std;

int main(void)
{
	deque<int> d {10, 20, 30, 40};

	d.push_front(50);
	d.push_back(60);

	for (auto i : d) {
		cout << i << ", ";
	}

	cout << "\n";

	return 0;
}
