#include<stdio.h>

#define kishor main()//macro_substitution method
int kishor
{

    float float1 = 1.2;

    float* float2 = NULL;

    //float2 = & float1;
printf("\n Address of float1 Variable = %p",float1);
printf("\n Stored Value in float1 variable is = %.1f",float1);

printf("\n Current value of float2 is = %d",float2);
printf("\n current value of float2 = %.1f",float2);
float2 = & float1;
printf("\n float1 value copy into float2 is = %.1f",float2);
printf("\n float1 value copy into *float2 is = %.1f",*float2);
*float2 = 2.3;
printf("\nmodified value of float2 is = %.1f",*float2);
printf("\nmodified value of float1 is = %.1f",float1);

    return 0;
}
