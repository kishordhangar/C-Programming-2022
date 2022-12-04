#include<stdio.h>

int main()
{
	// Variable Declarations
	int num1, num2, ans;

	// code
	num1 = 2; // 0 1 0
	num2 = 3; // 0 1 1
			  // 0 1 1 --> 3
	ans = num1 | num2;
	
	printf("\nAns = %d", ans);

	return(0);
}
