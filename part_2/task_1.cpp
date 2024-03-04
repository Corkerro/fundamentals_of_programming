#include <iostream>

using namespace std;

enum e_months {
    January, February, March, April, May, June, July, 
    August, September, October, November, December
};

e_months operator++(e_months & month)
{
	if (month == December)
	{
		month = January;
	}
	else
	{
		month = (e_months)(month + 1);
	}
	return month;
}
e_months operator++(e_months & month, int)
{
	e_months old_month = month;
	operator++(month);
	return old_month;        
}

e_months operator--(e_months& month)
{
	if (month == January)
	{
		month = December;
	}
	else
	{
		month = (e_months)(month - 1);
	}
	return month;
}
e_months operator--(e_months& month, int)
{
	e_months old_month = month;
	operator--(month);
	return old_month;
}

const char* get_name(e_months month) {
	switch (month)
	{
		case January:
			return "January";
		case February:
			return "Februrary";
		case March:
			return "March";
		case April:
			return "April";
		case May:
			return "May";
		case June:
			return "June";
		case July:
			return "July";
		case August:
			return "August";
		case September:
			return "September";
		case October:
			return "October";
		case November:
			return "November";
		default:
			return "December";
	}
}

int main()
{
	for (e_months m = October; m != June; m++)
	{
		std::cout << get_name(m) << "\n";
	}
	cout << "\n\n" << endl;
	for (e_months m = April; m != August; m--)
	{
		std::cout << get_name(m) << "\n";
	}
	return 0;

}
