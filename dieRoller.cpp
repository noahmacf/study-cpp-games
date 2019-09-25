// Die roller
// Demonstates generating random numbers

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // seed random number generator
    srand(static_cast<unsigned int>(time(0)));

    // generates random number
    int randomNumber = rand();

    // gets a number between 1 and 6
    int die = (randomNumber % 6) + 1;
    cout << "You rolled a " << die << endl;

    return 0;
}