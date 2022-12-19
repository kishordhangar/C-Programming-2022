#include<stdio.h>

int main()
{
	// Local Variable declaration
	int i, number;

	// code
	//printf("\nEnter the table value=");
	//scanf("%d", &number);

	for (i = 1; i <= 10; i++)
	{
		printf("\t%d", 1 * i);
		printf("\t%d", 2 * i);
		printf("\t%d", 3 * i);
		printf("\t%d", 4 * i);
		printf("\t%d", 5 * i);
		printf("\t%d", 6 * i);
		printf("\t%d", 7 * i);
		printf("\t%d", 8 * i);
		printf("\t%d", 9 * i);
		printf("\t%d", 10 * i);
		printf("\n");
	}

	return(0);
}

/*
i	num		print 
1	5		1 * 5 ==> 5
2	5		2 * 5 ==> 10
3	5		3 * 5 ==> 15
4	5
.
.
.

*/



