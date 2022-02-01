#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main(void)
{
	unordered_map<string, int> fruits;
	fruits.insert({"apple", 1000});
	fruits.insert({"banana", 1500});
	fruits["orange"] = 3000;
	fruits["graph"] = 4000;
	fruits["lemon"] = 5000;

	fruits["apple"] = 2000;
	fruits.erase("grape");

	for (auto [name, price] : fruits)
		cout << name << " is " << price << " won." << "\n";

	return 0;
}
