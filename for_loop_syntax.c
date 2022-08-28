


//1. Write a different alternative syntax for for loop .
#include<stdio.h>
int main()
{
printf("*********   1   ********");

printf("\nFirst for loop");
    int i=0;
       for( i=1; i<=10; i++)     //  1  normal syntax for for loop
    {
        printf("\n%d",i);
    }
    

printf("\n*********   2   ********");

   printf("\nsecond for loop");

        int j=0;

    for( ; ; ) //  2  this is infinite syntax for for loop
    {
         j++;
        if(j<=10)
        {
            
             printf("\n%d",j);
        }
        else
        {
            break;  // breake
        }
    }
     

printf("\n\n*********   3   ********");
 
 printf("\nthird for loop");
 
    int k=1;

    for(; k<=10;k++ ) // 3 syntax for for loop
   
    {
        
        printf("\n%d",k);
       
    }
    

printf("\n\n*********   4   ********");
printf("\nFourth for loop");

    int l=0;

    for( ;l<10; )
    {
        l++;
        printf("\n%d",l);  
    }      

 return 0;
 }
