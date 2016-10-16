
#include<stdio.h>
#include<string.h>
char* longestPalindrome(char* s);
int main()
{
	char *str=longestPalindrome("zeusnilemacaronimaisanitratetartinasiaminoracamelinsuez");
	printf(" Palindrome is :%s",str);

}
char* longestPalindrome(char* s)
{
	int n = strlen(s);
	char *arr =(char *) malloc(10);
	printf("%d",n);
	int i, k, j, len, start;
	int table[n][n];
	for (i = 0; i<n; i++)
	{
		table[i][i] = 1;
		len = 1;
	}
	for (i = 0; i<n - 1; i++)
	{
		if (s[i] == s[i + 1])
		{
			table[i][i + 1] = 1;
			len = 2;
		}
	}
	for (k = 3; k <= n; k++)
	{
		for (i = 0; i<n - k + 1; i++)
		{
			j = i + k - 1;
			if (table[i + 1][j - 1] == 1 && s[i] == s[j])
			{
				table[i][j] = 1;
				if (k>len)
				{
					len = k;
					start = i;
				}
			}
        }
	}
	printf("length is %d:",len);
	for (i = start; i < len+start; i++)
	{
		arr[i - start] = s[i];
	}

	return arr;

}
