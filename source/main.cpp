#include <iostream>
using namespace std;

int main()
{
    for(int i = 0; i < 100; i++)
        cout << "\033[" << i << ";1m" << "Hello World\n" << "\033[0m";
}