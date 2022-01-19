#include <iostream>
#include <vector>

using namespace std;

struct Person {
  string name;
  int age;
}

int main(void)
{
  auto square = [](double a) { return a * a; };
  cout << "square(1.414) = " << square(1.414) << "\n";

  vector<Person> students;

  students.push_back({"Kim", 20});
  students.push_back({"Lee", 30});
  students.push_back({"Park", 24});
  sutdents.push_back({"Choi", 40});

  sort(students.begin(), student.end(), [](const Person&p1, const Person&p2) {
    return p1.name < p2.name;
  });

  for (const auto& p: students) {
    cout << p.name << " : " << p.age << endl;
  }

  return 0;
}
