#include<stdio.h>
 
int main()
{
	//local Variable Declarations
	int i;

	// main code
	for (i = 1; i <= 10; i++)
	{
		if (i % 5 == 0)
			break;  // break the current loop

		printf("\ni = %d", i);
	}
	
	printf("\n\nend of program");
	return(0);
}
