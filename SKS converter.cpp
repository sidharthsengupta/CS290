/*********************************************************************
** Author: Sidharth Sengupta
** Date: 2017-10-26
** Description: Contains two recursive functions. decToBin takes an
** int parameter and returns its binary counterpart. binToDec takes
** a string parameter containing a binary value and returns its 
** integer counterpart 
*********************************************************************/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string decToBin(const int);
int binToDec(const string);

/* Testing main 
int main()
{
	cout << decToBin(512) << endl;
	cout << binToDec("1000000000") << endl;
	return 0;
}
*/

/*********************************************************************
** decToBin 
** Recursive function that takes an integer parameter and returns its
** binary value counterpart
*********************************************************************/
string decToBin(const int num)
{
	int quotient = num / 2;
	int remainder = num % 2;
	if(quotient == 0) //Base Case
	{
		if(remainder == 0)
			return "0";
		else
			return "1";
	}
	else
	{
		if(remainder == 0)
			return decToBin(quotient) + "0";
		else
			return decToBin(quotient) + "1";
	}
}

/*********************************************************************
** binToDec 
** Recursive function that takes a string containing a binary value
** and returns the integer counterpart. 
*********************************************************************/
int binToDec(const string str)
{
	if(str.length() == 1 )
	{
		if(str[0] == '1')
			return 1;
		else
			return 0;
	} 
	else 
	{
		if(str[0] == '1')
		{
			return pow(2.0, str.length() - 1)+binToDec(str.substr(1, str.length()));
		}
		else
			return binToDec(str.substr(1, str.length()));
	}
}


