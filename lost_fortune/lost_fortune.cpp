#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	const int GOLD_VALUE = { 900 };

	cout << "Welcome to Lost Fortune" << endl;

	cout << "\nPlease enter the following for your personalized adventure" << endl;

	cout << "Enter a number: ";
	int number = {};
	cin >> number;

	cout << "Enter a number, smaller than the first: ";
	int smallerNumber = {};
	cin >> smallerNumber;

	cout << "Enter your last name: ";
	string lastName = {};
	cin >> lastName;

	cout << "\nA brave group of " << number << " set out on a guest -- in search of the lost treasure of the Ancient Dwarves. The group was led by that legendary rogue, " << lastName << ".\n";

	cout << "\nAlong the way, a band of marauding ogres ambushed the party. All fought bravely under the command of " << lastName << ", and the ogres were defeated, but at a cost. Of the adventurers, " << smallerNumber << " were vanquished, leaving just " << number-smallerNumber << " in the group.\n";

	cout << "\nThe party was about to give up all hope. But while laying the deceased to rest, they stumbled upon the buried fortune. So the adventurers split " << GOLD_VALUE << " gold pieces. " << lastName << " held on to the extra " << GOLD_VALUE % (number - smallerNumber) << " pieces to keep things fair of course.\n";


	return 0;
}