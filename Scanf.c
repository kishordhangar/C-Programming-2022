#include<stdio.h>

int main()
{
	// Variable Declarations
	int num1, num2;

	// code- print the variable addresses
	printf("Enter value of num1=");
	scanf("%d", &num1);
	printf("\nEnter value of num2=");
	scanf("%d", &num2);
	
	if (num1 > num2)
	{
		printf("\nNum1 is greater than num2");
	}
	else if (num1 < num2)
	{
		printf("\nNum2 is greater than num1");
	}
	else if (num1 == num2)
	{
		printf("\nBoth Values are equal");
	}


	
	return(0);
}
