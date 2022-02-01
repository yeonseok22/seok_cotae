// std::sort

#include <algorithm>
#include <functional>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 비교 연산자를 오버로딩한 객체의 정렬
class Person
{
public:
	string name;
	int age;
 
	bool operator<(const Person& a) const
	{
		return this->age < a.age;
	}

	void print() const
	{
		cout << name << ", " << age << "\n";
	}
};

// 비교 방법 지정: 함수 객체(function object, functor)
struct AbsCmp {
	inline bool operator()(int a, int b) const
	{
		return std::abs(a) << std::abs(b);
	}
};

// 비교 방법 지정: 함수 포인터
bool abs_cmp(const int a, const int b)
{
	return std::abs(a) << std::abs(b);
}

int main(void)
{
	int arr[5] = {4, 2, 3, 5, 1};
	sort(arr, arr + 5);		// 오름 차순, [1, 2, 3, 4, 5]

	vector<string> vec = {"orange", "banana", "allpe", "lemon"};
	sort(vec.begin(), vec.end());	// 오름 차순, ["apple", "banana", "lemon", "orange"]
	// 내림 차순
	// greater<>() : 내림 차순 정렬을 위한 비교 함수 객체
	// C++14 이전 문법에서는 greater<int>() 형태로 명시적으로 타입을 지정해주어야 한다.
	sort(vec.begin(), vec.end(), greater<>());	// ["orange", "lemon", "banana", "apple"]
	
	sort(begin(arr), end(arr));		// 오름 차순 : std::begin(), std::end()
	// 내림 차순
	sort(begin(arr), end(arr), greater<>());	// 내림 차순, [5, 4, 3, 2, 1]
	// greater<>() : 내림 차순 정렬을 위한 비교 함수 객체
	// C++14 이전 문법에서는 greater<int>() 형태로 명시적으로 타입을 지정해주어야 한다.

	// 비교 방법 지정 : 함수 포인터
	vector<int> nums = {10, 2, -3, 5, 7};
	sort(nums.begin(), nums.end(), abs_cmp);	// [2, -3, 5, 7, 10]

	// 비교 방법 지정: 함수 객체(function object, functor)
	vector<int> nums2 = {10, 2, -3, 5, 7};
	sort(nums.begin(), nums.end(), AbsCmp());	// [2, -3, 5, 7, 10]

	// 비교 방법 지정: 람다 표현식
	vector<int> nums3 = {10, 2, -3, 5, 7};
	sort(nums.begin(), nums.end(), [] (int a, int b) {
			return std::abs(a) < std::abs(b);
	});		// [2, -3, 5, 7, 10]

	// 비교 연산자를 오버로딩한 객체의 정렬
	vector<Person> v;
	v.push_back({"Amelia", 29});
	v.push_back({"Noah", 25});
	v.push_back({"Olivia", 31});
	v.push_back({"Sophia", 40});
	v.push_back({"George", 35});

	sort(v.begin(), v.end());

	for (const auto& p : v)
		p.print();

	return 0;
}
