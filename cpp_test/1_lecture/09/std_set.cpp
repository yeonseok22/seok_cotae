#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(void)
{
	set<int> odds {1, 7, 5, 3, 9};			// 오름차순 정렬하여 저장
	set<int, greater<>> evens {2, 4, 6, 8};	// 내림차순 정렬하여 저장
	evens.insert(10);
	evens.insert(2);

	if (evens.find(4) != evens.end())
		cout << "4 is found!" << "\n";
	else
		cout << "4 is not found!" << "\n";

	for (auto n : odds)
		cout << n << ", ";
	cout << "\n";

	for (auto n : evens)
		cout << n << ", ";
	cout << "\n";

	using psi = pair<string, int>;

	set<psi> managers {{"Amelia", 29}, {"Noah", 25}, {"Olivia", 31},
		{"Sophia", 40}};
	managers.insert({"George", 35});

	psi person1 = {"Noah", 25};
	if (managers.find(person1) != managers.end())
		cout << person1.first << " is a manager!" << "\n";
	else
		cout << person1.first << " is not a manager!" << "\n";

	managers.erase({"Sophia", 40});
	managers.erase({"Noah", 30});

	for (const auto& m : managers)
		cout << m.first << "(" << m.second << ")" << "\n";

	return 0;
}

/* 결과
   4 is even!
   1, 3, 5, 7, 9,
   10, 8, 6, 4, 2,
   Noah is a manager!
   Amelia(29)
   George(35)
   Noah(25)
   Olivia(31)
*/
