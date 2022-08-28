

//Continue statement using while loop

#include<stdio.h>
int main()
{
 int i=0;

while(i<=10)
  {
   
    i++;

    if(i==7 || i==8 || i==9)
            {
             continue;
            }
             printf("\n%d",i);
  }
    return 0;
}