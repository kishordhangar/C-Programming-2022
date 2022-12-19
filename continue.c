#include<stdio.h>
 
int main()
{
	// local Variable Declarations
	int i;

	// code
	for (i = 1; i <= 10; i++)
	{
		if (i % 5 == 0)
			continue;  // skip the next statements
		printf("\ni = %d", i);
	}
	
	printf("\n\nLast line of the program");
	return(0);
}
