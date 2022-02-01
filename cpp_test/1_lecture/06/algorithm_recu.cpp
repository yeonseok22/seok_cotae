#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    std::vector<int> vec {1, 4, 3, 2};
	std::sort(vec.begin(), vec.end());

	do {
		for (int a : vec)
			cout << a;
		cout << "\n";
	} while (std::next_permutation(vec.begin(), vec.end()));
    
	return 0;
}
