#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    cout << (rand() % 10) + 1 << endl;
}