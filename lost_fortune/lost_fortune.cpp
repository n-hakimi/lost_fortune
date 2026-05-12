#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	// update GOLD_VALUE to GOLD_PIECES
	const int GOLD_PIECES = { 900 };

	// re-initialize the variables to make it more readable
	// number -> adventurers, smallerNumber -> killed, lastName -> leaders
	int adventurers, killed, survivors;
	string leader;

	// get the information
	cout << "Welcome to Lost Fortune" << endl;

	cout << "\nPlease enter the following for your personalized adventure" << endl;

	cout << "Enter a number: ";
	cin >> adventurers;

	cout << "Enter a number, smaller than the first: ";
	cin >> killed;

	survivors = adventurers - killed;

	cout << "Enter your last name: ";
	cin >> leader;

	cout << "\nA brave group of " << adventurers << " set out on a quest -- in search of the lost treasure of the Ancient Dwarves. The group was led by that legendary rogue, " << leader << ".\n";

	cout << "\nAlong the way, a band of marauding ogres ambushed the party. All fought bravely under the command of " << leader << ", and the ogres were defeated, but at a cost. Of the adventurers, " << killed << " were vanquished, leaving just " << survivors << " in the group.\n";

	cout << "\nThe party was about to give up all hope. But while laying the deceased to rest, they stumbled upon the buried fortune. So the adventurers split " << GOLD_PIECES << " gold pieces. " << leader << " held on to the extra " << GOLD_PIECES % survivors << " pieces to keep things fair of course.\n";


	return 0;
}