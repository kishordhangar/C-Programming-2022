#include<stdio.h>

int main()
{
	// Variable Declarations
	int math, sci, hindi;

	printf("\nEnter the value ofd math = ");
	scanf("%d", &math);
	printf("\nEnter the value ofd science = ");
	scanf("%d", &sci);
	printf("\nEnter the value ofd hindi = ");
	scanf("%d", &hindi);
	
	// math > 40, sci > 40 --> PASS
	// sci > 40, hindi > 40 --> PASS
	// math > 40, hindi > 40 --> PASS
	
	// math > 40, sci < 40, hindi < 40  -- ATKT Sci, Hindi
	// sci > 40, math < 40, hindi < 40  -- ATKT math, Hindi
	// hindi > 40, sci < 40, math < 40  --ATKT Sci, math

	// math < 40, sci < 40, hindi < 40 -- fail

	if (math >= 40 && sci >= 40 && hindi >=40)
	{
		printf("\nPASS");
	}
	else if (math >= 40 && sci <= 40 && hindi >=40)
	{
		printf("\nATKT: num2");
	}
	else if (math <= 40 && sci >= 40 && hindi >=40)
	{
		printf("\nATKT: num1");
	}
	else
	{
		printf("\n Fail");
	}

	return(0);
}
