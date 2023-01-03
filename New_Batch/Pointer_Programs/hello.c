#include<stdio.h>
int main()
{
  char char1='k';
  char* char2;
  
  char2 =&char1;
  

  printf("stored var address = %p",char1);
   printf("stored var address char1 = %c",char1);
   printf("stored var address = %c",*char2);
   printf("stored var address = %c",char1);

  return 0;
}
