/*********************************************************************
 ** Author: Sidharth Sengupta
 ** Date: 2017-10-26
 ** Description: Contains a recursive function called summer that
 ** takes an array of doubles and array size and returns the sum of
 ** the array 
 *********************************************************************/
#include <iostream>
using namespace std;

//Function Prototype  
double summer(const double [], int);

/* Testing main
int main()
{

	const int SIZE = 5; 
	double nums[SIZE] = {1.25, 1.25, 1.25, 1.25, 1.25}; 
	cout << summer(nums, SIZE) << endl;
	return 0;
}
*/

/*********************************************************************
 ** summer 
 ** Recursive function that takes array of doubles and int array size
 ** and returns the sum of the double values in the array  
 *********************************************************************/
double summer(const double array[], int pos)
{
    pos--;
	if(pos < 0) //Base Case  
		return 0;
	else
		return array[pos] + summer(array, pos);
}

