
/*
OVERVIEW: Given a number N return all the prime numbers upto the integer N.
Ex: input: 10 output: [2,3,5,7] 

INPUTS: An Integer N

OUTPUT: Return an Array of Prime numbers until the number N(N inclusive)

ERROR CASES: Return NULL for invalid inputs

Sample Input : 10
Sample Output : An Array consisting elements {2,3,5,7}
NOTES:

Try to think of a optimized way , and avoid unnecessary comparisons.
*/

#include <stdio.h>
#include<stdlib.h>
bool checkprime(int num)
{
	int i, status = true;
	if (num < 2)
		return false;
	if (num == 2)
		return true;
	for (i = 2; i < num; i++)
	{
		if (num%i == 0)
			status = false;
	}
	return status;
}
int* nPrime(int N)
{
	if (N <= 0)
		return 0;
	int i, count = 0;
	int *arr;
	arr = (int*)malloc(N*sizeof(int));
	bool status;

	for (i = 1; i < N; i++)
	{
		status = checkprime(i);
		if (status == true)
		{
			arr[count++] = i;
		}
	}
	return arr;


}