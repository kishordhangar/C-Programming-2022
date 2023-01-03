#include<stdio.h>
#define kishor main()//macro_substitution method
int kishor
{

    double Double1 = 20.14;

    double* Double2 = NULL;

    Double2 = &Double1;

    //float2 = & Double1;
printf("\n Address of Double1 Variable = %p",Double1);
printf("\n Address of Double1 Variable = %p",Double2);
printf("\n Stored Value in Double1 variable is = %.1f",Double1);

printf("\n Double1 value copy into *Double2 is = %.1f",*Double2);
*Double2 = 30.20;
printf("\n modified value of Double2 is = %.1f",*Double2);
printf("\n modified value of Double1 is = %.1f",Double1);

    return 0;
}
/*
OUTPUT

 
 Address of Double1 Variable = 0A3D70A4
 Address of Double1 Variable = 0061FF10
 Stored Value in Double1 variable is = 20.1
 Double1 value copy into *Double2 is = 20.1
 modified value of Double2 is = 30.2
 modified value of Double1 is = 30.2
 
*/