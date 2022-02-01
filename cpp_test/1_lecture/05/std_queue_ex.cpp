// std::queue 사용 예제
#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.pop();

	cout << q.front() << "\n";
	q.push(40);

	while (!q.empty()) {
        // 큐인 q가 비어 있지 않을 때까지 loop
		auto& e = q.front();
		cout << e << ", ";
		q.pop();
	}

	cout << "\n";
	
	return 0;
}
