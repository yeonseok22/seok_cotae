#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

template <typename T>
void print_queue(T q)
{
	while (!q.empty()) {
		cout << q.top() << ", ";
		q.pop();
	}
	cout << "\n";
}

class Student
{
public:
	string name;
	int score;

	bool operator < (const Student& st) const
	{
		return score < st.score;
	}
};

int main(void)
{
	vector<int> vec { 4, 2, 3, 5, 1};

	priority_queue<int> pq1;
	for (auto n : vec)
		pq1.push(n);
	print_queue(pq1);

	priority_queue<int, vector<int>, greater<int>> pq2(vec.begin(), vec.end());
	print_queue(pq2);

	priority_queue<Student> students;
	students.push({"Amelia", 80});
	students.push({"Sophia", 40});
	students.push({"Olivia", 95});
	students.push({"George", 70});

	while (!students.empty()) {
		auto& s = students.top();
		cout << s.name << " (" << s.score << ")" << "\n";
		students.pop();
	}

	return 0;
}

/*
5 4 3 2 1
1 2 3 4 5
Olivia (95)
Amelia (80)
George (70)
Sophia (40)
*/
