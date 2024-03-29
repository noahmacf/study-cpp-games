// Lost Fortune
// A personalized adventure

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    const int GOLD_PEICES = 900;
    int adventurers, killed, survivors;
    string leader;

    // get the information
    cout << "Enter a number: ";
    cin >> adventurers;

    cout << "Enter a number, smaller than the first: ";
    cin >> killed;

    survivors = adventurers - killed;

    cout << "Enter your last name: ";
    cin >> leader;

    //tell the story
    cout << "\nA brave group of " << adventurers << "set out on a quest";
    cout << "-- in search of the lost treasure pf the Ancient Dwarves";
    cout << "The group was led by that legendary rogue, " << leader << ".\n";
    cout << "\nAlong the way, a band of marauding ogres ambushed the party. ";
    cout << "All fought bravely under the command of " << leader;
    cout << ", and the ogres were defeated, but at a cost. ";
    cout << "Of the adventurers, " << killed << " were vanquished";
    cout << "leaving just " << survivors << " in the group.\n";

    cout << "\nThe party was just about to give up all hope. ";
    cout << "But while laying the deceased to rest, ";
    cout << "they stumbled upon the buried fortune. ";
    cout << "So the adventurers split " << GOLD_PEICES << " gold pieces. ";
    cout << leader << " held on the the extra " << (GOLD_PEICES % survivors);
    cout << " pieces to keep things fair of course.\n";

    return 0;
}