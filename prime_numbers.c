
//prime numbers
#include<stdio.h>
int main()
{
int i,j,cnt=0,c;
for(i=2;i<=100;i++)
{
for(j=1;j<=i;j++)
{
if(i%j==0)
c=cnt++; }
if(c<2)
printf("%d\n",i);
cnt=0;
}
}