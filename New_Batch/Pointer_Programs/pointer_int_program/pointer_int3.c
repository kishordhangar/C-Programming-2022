#include<stdio.h>
int main()
{

    //location variable decalration and intialisation
int Num1=10;

int* Num2 = NULL; //Integer pointer varibale decalration
Num2 = & Num1;
printf("\nAddress of Num1 = %p",Num1);//%p use for access address

printf("\nValue of Num1 =%d",Num1);

printf("\nusing *Num2 value of Num2 =%d",*Num2);
*Num2 = 20;
printf("\nusing *Num2 modifide value of Num2 =%d",*Num2);

printf("\n");

    return 0;
}
/*OUTPUT

Address of Num1 = 0000000A
Value of Num1 =10
using *Num2 value of Num2 =10
using *Num2 modifide value of Num2 =20
*/