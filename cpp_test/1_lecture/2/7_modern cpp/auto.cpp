#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main(void)
{
    vector<int> odds {1, 3, 5, 7, 9};

    auto a1 = 10;           // int
    auto a2 = 3.14f;        // float
    auto a3 = "hello";      // const char*
    auto a4 = "hello"s;     // std::string
    auto a5 = sqrt(2.0);    // double
    auto a6 = odds;       // vector<int>
    auto a7 = a6.begin();   // vector<int>::iterator
    auto lambda = [](int x) { return x * 2; };       // lambda
}