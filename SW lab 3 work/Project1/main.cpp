#include <string>
#include <iostream>

#include "card.h"
#include "deck.h"

using namespace std;
using namespace SDI_REVIEW;

int main(int argc, char* argv[])
{
	int userExit = 0;
	Deck myDeck;
	myDeck.shuffle();
	for (int c = 0; c < 52; ++c)
	{
		cout << myDeck.nextCard().toString() << endl;
	}
	
	for (;;) {
		cout << "Press 1 and then press enter to exit once you are finished reading the list." << endl;
		for (;;) {
			cin >> userExit;
			if (cin.good() && userExit == 1) {
				break;
			}
			cout << "That input is invalid. Please press 1 and then enter to exit." << endl;
			cin.clear();
			cin.ignore();
		}
		return userExit;
	}
}