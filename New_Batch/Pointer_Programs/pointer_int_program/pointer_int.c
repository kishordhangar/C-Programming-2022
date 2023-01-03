#include<stdio.h>
int main()
{

    //location variable decalration and intialisation
int var1=10;

int* pVar = NULL; //Integer pointer varibale decalration
pVar = & var1;
printf("\nAddress of var1 = %p",var1);//%p use for access address

printf("\nValue of var1 =%d",var1);

printf("\nvalue of pVar =%d",*pVar);

printf("\n");

    return 0;
}


/*
OUTPUT


Address of var1 = 0000000A
Value of var1 =10
value of pVar =10
*/