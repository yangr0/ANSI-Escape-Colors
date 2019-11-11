#include <iostream>
using namespace std;

int main()
{
    for(int i = 0; i < 101; i++)
        cout << i << ". " "\033[" << i << "m" << "Hello World\033[0m" << endl;
}