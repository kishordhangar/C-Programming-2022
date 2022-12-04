/*#include<stdio.h>

int main()
{
	// Variable Declarations
	int num1, num2;

	// code- print the variable addresses

	printf("\nAddress of num1 = %p", num1);
	printf("\nAddress of num2 = %p", num2);
	
	return(0);
}*/



#include<stdio.h>

int main()
{
	
	// local variable declaration
	int num1;
	int num2;
	
	//variable address
	printf("\nADRESS OF INTEGER VARIABLE\n");
	printf("ADDRESS OF NUM1 = %p\n", &num1);
	printf("ADDRESS OF NUM2 = %p\n", &num2);
	printf("\n");
		printf("ADDRESS OF NUM1 = %d\n", &num1);
		printf("ADDRESS OF NUM2 = %d\n", &num2);
		printf("\n");
				printf("ADDRESS OF NUM1 = %d\n", num1);
				printf("ADDRESS OF NUM2 = %d\n", num2);
	
		printf("\nSIZE  OF INTEGER VARIABLE\n");
		
	printf("\nSIZE OF NUM1 = %d ",sizeof(num1));
	printf("\nSIZE OF NUM2 = %d ",sizeof(num2));
	
	
	printf("\n");
	printf("\n");
	
	
	return 0;
}




