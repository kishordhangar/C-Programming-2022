#include<stdio.h>
int main()
{

int num1=0;
int num2=0;
int num3=0;
int count;

for(num1=2; num1<=40; num1++)
{
    for(num2=1; num2<=num1; num2++)
    {
        if(num1%num2==0)
        num3=count++;
    }
        if(num3<2)
        printf("  Odd Numbers =  %d\n",num1);
        count=0;
}
return 0;
}
/*
OUTPUT
  Odd Numbers =  3
  Odd Numbers =  5
  Odd Numbers =  7
  Odd Numbers =  11
  Odd Numbers =  13
  Odd Numbers =  17
  Odd Numbers =  19
  Odd Numbers =  23
  Odd Numbers =  29
  Odd Numbers =  31
  Odd Numbers =  37
*/