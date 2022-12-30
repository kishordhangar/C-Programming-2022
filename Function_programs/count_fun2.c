#include<stdio.h>
int main()
{

//function declaration
void count();

//call function
count();
count();
count();
count();
count();
    return 0;
}

void count()
{
//local variable declaration
static int cnt = 0;
//code
cnt++;
printf("\nCount = %d",cnt);
}