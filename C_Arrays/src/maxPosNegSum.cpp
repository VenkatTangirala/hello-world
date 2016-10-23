
/*
OVERVIEW: Given an array of integers find the maximum possible sum formed by a positive and the negative
integer in the array.
Ex: input: [1, 9, 8, 2, 3, -1,-10,-5] output: 8 (formed by 9 and -1) 

INPUTS: An Integer array and the length of the array

OUTPUT: Maximum possible sum formed by a positive and the negative integer in the array

ERROR CASES: Return 0 for the invalid inputs

NOTES:
*/
int maxPosNegSum(int* input, int length)
{
	int i, j, temp, countpos = 0, countneg = 0;
	if (length <= 0)
		return 0;
	for (i = 0; i < length; i++)
	{
		if (input[i]>0)
			countpos++;
		else if (input[i]<0)
			countneg++;
	}
	if (countneg == length || countpos == length)
		return 0;
	for (i = 0; i < length; i++)
	{
		for (j = 0; j < length - i - 1; j++)
		{
			if (input[j]>input[j + 1])
			{
				temp = input[j];
				input[j] = input[j + 1];
				input[j + 1] = temp;
			}

		}

	}
	return input[countneg - 1] + input[length - 1];
}