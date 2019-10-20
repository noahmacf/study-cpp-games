// Guess my number

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    int randomNumber = (rand() % 100) + 1;
    int guess, tries;

    do
    {
        cout << "Guess a number between 1 and 100: " << endl;
        cin >> guess;
        ++tries;

        if (guess > randomNumber)
        {
            cout << "Too high!\n\n";
        }
        else if (guess < randomNumber)
        {
            cout << "Too low!\n\n";
        }
        else
        {
            cout << "\nThat's it! You got it in " << tries << " guesses!\n";
        }
        
    } while (guess != randomNumber);
    
    return 0;
}
