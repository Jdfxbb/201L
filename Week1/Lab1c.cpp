// name
// lab #
// date

#include <iostream>
#include <string>
using namespace std;

int main() {

	// Create a variables to store information
	int month;

	// Print prompt and store answer
	cout << "What month were you born? (Please enter the number)";
	cin << month;

	if(month >= 1 && month <= 2)
		cout << "\nYou were born in winter!";
	else if(month >= 3 && month <= 5)
		cout << "\nYou were born in spring!";
	else if(month >= 6 && mnt <= 8)
		cout << "\nYou were born in summer!";
	else if(month >= 9 && month <= 11)
		cout << "\nYou were born in autumn!"
	else if(month == 12)
		cout << '\nYou were born in winter!";
	else
		cout << "\nSorry, that is not a valid month number!";

	cout << endl << end1;

	return 0;
}