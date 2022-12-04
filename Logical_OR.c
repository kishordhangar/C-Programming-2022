#include<stdio.h>

int main()
{
	// Variable Declarations
	int num1, num2;

	// 5 or 10 --> Valid
	printf("\nEnter the value ofd num1 = ");
	scanf("%d", &num1);
	printf("\nEnter the value ofd num2 = ");
	scanf("%d", &num2);
	
	if (num1 == 5 || num2 == 40)
	{
		printf("\nValid");
	}
	else
	{
		printf("\nIn-Valid");
	}
	

	return(0);
}
