/*
OVERVIEW: Given a sorted array, insert a given number into the array at appropriate position.
			E.g.: Arr = [2, 4, 6], num = 5 final Arr = [2, 4, 5, 6]. 5 is inserted at 2nd index.

INPUTS: Integer	Array pointer, length of the array, number to be inserted.

OUTPUT: Array pointer after inserting number.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Use memory allocation techniques to allocate memory.

ProblemCode :SAIN
*/

#include <stdio.h>
#include <malloc.h>

int * sortedArrayInsertNumber(int *Arr, int len, int num)
{
	if (len <= 0 || Arr == NULL)
		return NULL;
	int i, index = 0;
	int *newarr = (int*)malloc(sizeof(int)*(len + 1));
	for (i = 0; i < len; i++)
	{
		if (num > Arr[i])
		{
			index = i + 1;
		}
	}
	for (i = 0; i < index; i++)
	{
		newarr[i] = Arr[i];
	}
	for (i = index; i < len; i++)
	{
		newarr[i + 1] = Arr[i];
	}
	newarr[index] = num;

	return newarr;
}