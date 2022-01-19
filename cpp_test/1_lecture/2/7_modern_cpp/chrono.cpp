#include <iostream>
#include <chrono>

using namespace std;

int main(void)
{
    auto start = chrono::system_clock::now();

    // Do something!
    

    auto end = chrono::system_clock::now();
    auto msec = chrono::duration<double>(end - start).count() * 1000;

    cout << "Elapsed time: " << msec << "ms. " << endl;

    return 0;
}
