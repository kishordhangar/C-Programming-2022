#include<stdio.h>

int main()
{
	// Local Variable Declaration
	int num;

	printf("Enter the number between 1-5:");
	scanf("%d", &num);

	if (num == 1)
	{
		printf("\nAction for number 1");
	}
	else if (num == 2)
	{
		printf("\nAction for number 2");
	}
	else if (num == 3)
	{
		printf("\nAction for number 3");
	}
	else if (num == 4)
	{
		printf("\nAction for number 4");
	}
	else if (num == 5)
	{
		printf("\nAction for number 5");
	}
	else
	{
		printf("\nInvalid number");
	}

	return(0);
}