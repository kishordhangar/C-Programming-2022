

//RELATIONAL OPERATORS
#include <stdio.h>
int main()
{
int a;
int b;
int c;

printf("enter the value of a =");
scanf("%d",&a);
printf("enter the value of b =");
scanf("%d",&b);
printf("enter the value of c =");
scanf("%d",&c);
if(a==b)
{
printf("If Integer %d == %d =ANSWER IS = %d \n", a, b, a == b); // true
}
else if(a==c)
{
printf("If Integer %d == %d =ANSWER IS = %d \n", a, c, a == c); // false
}
else if(a>b)
{
printf("If Integer%d > %d =  ANSWER IS = %d \n", a, b, a > b); //false
}
else if(a>c)
{
printf("If Integer %d > %d = ANSWER IS = %d \n", a, c, a > c); //false
}
else if(a<b)
{
printf("If Integer %d < %d = ANSWER IS = %d \n", a, b, a < b); //false
}
else if(a < c)
{
printf("If Integer %d < %d = ANSWER IS = %d \n", a, c, a < c); //true
}
else if(a != b)
{
printf("If Integer %d != %d =ANSWER IS =  %d \n", a, b, a != b); //false
}
else if(a != c)
{
printf("If Integer %d != %d =ANSWER IS =  %d \n", a, c, a != c); //true
}
else if(a >= b)
{
printf("If Integer %d >= %d =ANSWER IS =  %d \n", a, b, a >= b); //true
}
else if(a >= c)
{
printf("If Integer %d >= %d =ANSWER IS =   %d \n", a, c, a >= c); //false
}
else if(a <= b)
{
printf("If Integer %d <= %d =ANSWER IS =  %d \n", a, b, a <= b); //true
}
else if(a <= c)
{
printf("If Integer %d <= %d =ANSWER IS = %d \n", a, c, a <= c); //true
}
return 0;
}
/*
OUTPUT


// a.exe
enter the value of a =1
enter the value of b =2
enter the value of c =1
If Integer 1 == 1 =ANSWER IS = 1


// a.exe
enter the value of a =1
enter the value of b =2
enter the value of c =1
If Integer 1 == 1 =ANSWER IS = 1

// a.exe
enter the value of a =2
enter the value of b =3
enter the value of c =3
If Integer 2 < 3 = ANSWER IS = 1
*/