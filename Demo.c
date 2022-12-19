#include <stdio.h>

int main()
{
	// Variable Declaration
	unsigned int num;
	unsigned int ans = 0;

	// code
	printf("\nEnter Value =");
	scanf("%u", &num);

	// Count the bits - 1
	for (ans = 0; num != 0; num >>= 1)
	{
		if (num & 01)
		{
			ans++;
		}
	}
	
	printf("\ncount = %d", ans);

	return(0);
}
