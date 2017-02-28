#include "readint.h"
//#include "stdafx.h"
#include <stdexcept>
using namespace std;

int read_int(const string &prompt, int low, int high)
{
	if (low >= high)
	{
		throw range_error("m");
	}
	if (low == NULL || high == NULL)
	{
		throw invalid_argument("e");
	}
	return low;
}
