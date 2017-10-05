/*

Your Name - Date Period

Assignment Name : *

Brief Description of the Assignment

*/

// Libraries

#include <iostream>// gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha

#include <conio.h> // gives access to _kbhit() and _getch() for pause()

// Namespaces

using namespace std;

// Functions()

void pause() {

cout << "Press any key to continue . . .";

while (!_kbhit());

_getch();

cout << '\n';	
}

// MAIN

void main() {

	// defining and assigning variables
	int x; 
	int a; 
	int b;
	int c;
	int y;

	cout << "Please enter  3 digit number . . ." << endl;
	cin >> x; // generate random 3 digit numbers... ex: '391'
		// MAIN
		//Defining variables
	a = x / 100; 

	y = x / 10;

	b = y % 10;

	c = x % 10;
	// user queries
		cout << x << endl;
	if (a > b && b > c) {
		cout << "descending" << endl;
}
	else if (a < b && b < c) {
		cout << "ascending" << endl;
}
	else {
		cout << "neither" << endl;

}

		pause(); // pauses to see the displayed text
}