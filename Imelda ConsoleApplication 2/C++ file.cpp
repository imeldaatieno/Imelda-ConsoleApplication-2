#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{
	// Declare Variable

	double usd;
	double rate;
	double euro;
	rate = 0.85;
	// Declare Columns
	const int COLMFT1 = 35;
	const int COLMFT2 = 15;
	// Format Real Numbers

	cout << fixed << setprecision(2);
	//Welcome Header
	cout << "Welcome to C++ Currency Converter" << endl;
	//Prompt user input

	cout << setw(COLMFT1) << left << "Enter a value (US dollars): ";
	cin >> usd;
	cout << endl;
	//Show User input

	cout << setw(COLMFT1) << left << "US dollars: ";
	cout << setw(COLMFT1) << right << usd << endl;
	//convention Rate
	cout << setw(COLMFT1) << left << "Conversion rate(per US dollar): ";
	cout << setw(COLMFT1) << right << rate << endl;
	//Crate conversion
	euro = usd * rate;
	//Converted currency

	cout << setw(COLMFT1) << left << "Euro: ";
	cout << setw(COLMFT1) << right << euro << endl;
	//Show application close
	cout << "\n closing" << endl;
	cout << "\nEnd of Rate Converter" << endl;
}