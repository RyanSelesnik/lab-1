// Exercising the Screen class
#include "screen.h"
#include <iostream>

using namespace std;

int main()
{
	/*
	// Generates 6x6 screen with * in (2,1) and (2,2); - from (3,3) to (3,5). Background of #s
	auto myScreen = Screen{6,6};
	myScreen.forward(); 
	myScreen.set('*');
	myScreen.down();
	myScreen.set('*');
	myScreen.move(3,3);
	myScreen.set("---");

	myScreen.display();
	cout << endl;

	// resiszes to 16x16
	myScreen.reSize(16,16);
	myScreen.display();
	// clears screen and changes background to blank squares
	myScreen.clear(' ');

	// BIG on (7,7) to (7,9). SREEEN on (8,5) to (8,10)
	myScreen.move(7,7);
	myScreen.set("BIG");
	myScreen.move(8,5);
	myScreen.set("SCREEN");
	myScreen.display();
	*/

	// display letter 'I' on 6x6 screen
	auto myScreen = Screen{ 6,6, ' '};
	string rowOfStars = "";
	for (int i = 1; i <= myScreen.width(); i++)
		rowOfStars += "*";
	
	// put stars in top and bottom rows
	myScreen.home();
	myScreen.set(rowOfStars);
	myScreen.move(myScreen.height(), 1);
	myScreen.set(rowOfStars);
	
	// put stars in middle column (or middle 2 columns if screen width is even)
	int cursorRow = 2;
	string colStars = (myScreen.width() % 2 == 1 ? "*" : "**");
	while (cursorRow < myScreen.height()) {
		myScreen.move(cursorRow, (myScreen.width() + 1) / 2);
		myScreen.set(colStars);
		cursorRow++;
	}
	myScreen.display();

	// draw empty square
	myScreen.clear('#');
	myScreen.drawEmptySquare(4, 4, 2);
	myScreen.display();
	return 0;
}

