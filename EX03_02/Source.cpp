#include <iostream>
#include <stdexcept>
//#include "stdafx.h"
#include "readint.h"
using namespace std;

int main()
{
	int low, high;
	int j = 0;
	do
	{
		cout << "Enter the range of values to read.\n";
		cout << "high: ";
		cin >> high;
		cout << "low: ";
		cin >> low;
		try
		{
			int number = read_int("Please enter a number with in the range: ", low, high);
			cout << "You entered " << number << endl;
			j = 1;

		}
		catch (range_error &m)
		{
			cerr << "Exception: You supplied an invalid argument for read_int!\n";
			j = 0;
		}
		catch (invalid_argument &e)
		{
			cerr << "Exception: You supplied an invalid argument for read_int!\n";
			j = 0;
		}
		catch (ios_base::failure& f)
		{
			cerr << "Fatal error occured.\n";
			cin.clear(istream::failbit);
			j = 0;
		}
		catch (...)
		{
			cerr << "unknown error.\n";
			abort();
			j = 0;
		}
	} while (j = 0);
	return 0;
}