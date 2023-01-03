#include<stdio.h>
int main()
{

    //location variable decalration and intialisation
int Var1=10;

int* pVar = NULL; //Integer pointer varibale decalration
printf("\n********************************************************");
printf("\n******Address of Var1 is Givn below.....");
printf("\nAddress of Var1 = %p",Var1);//%p use for access address


printf("\n********************************************************");

printf("\n******Current Value of Var1 is Given Below....");
printf("\n Current Value of Var1 =%d",Var1);


printf("\n********************************************************");

printf("\n*****Expected value of pVar is 0 Because Assigned NULL*****");
printf("\n Current value of pVar =%d",pVar);

printf("\n********************************************************");
pVar = &Var1;

printf("\n");

//  *pVar use for to fetch store value of that perticular address
printf("\n******pVar use for to fetch stored value of that perticular address******");
printf("\nusing pointer value of pVar =%d",*pVar);

printf("\n********************************************************");



    return 0;
}

/*OUTPUT 
********************************************************
******Address of Var1 is Givn below.....
Address of Var1 = 0000000A
********************************************************
******Current Value of Var1 is Given Below....
 Current Value of Var1 =10
********************************************************
*****Expected value of pVar is 0 Because Assigned NULL*****
 Current value of pVar =0
********************************************************

******pVar use for to fetch stored value of that perticular address******
using pointer value of pVar =10
********************************************************
*/