#include<stdio.h>

int main()
{
	// Local Variable Declaration
	int num;

	printf("Enter the number between 1-5:");
	scanf("%d", &num);

	switch (num)
	{
	case 1:
		printf("\nAction for number 1");
		break;

	case 2:
		printf("\nAction for number 2");
		break;

	case 3:
		printf("\nAction for number 3");
		break;

	case 4:
		printf("\nAction for number 4");
		break;

	case 5:
		printf("\nAction for number 5");
		break;

	default:
		printf("\nInvalid number");
		break;
	
	}

	return(0);
}