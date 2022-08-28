

//break statement using while loop

#include<stdio.h>
int main()
{
 int i=0;

while(i<=10)
  {
    printf("\n%d",i);
    i++;

    if(i==6)
    {
    break;
    }
  }
    return 0;
}