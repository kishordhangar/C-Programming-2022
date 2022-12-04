

//HELLOW WORLD PROGRAM IN C

#include<stdio.h>
int main()
{
	printf("Hellow World");
	
	return 0;
}
/*

OUTPUT

HelloW World

*/


//HELLOW WORLD PROGRAM IN LOOP

#include<stdio.h>
int main()
{
	for(int i=0; i<=10; i++)
	{
	printf("Hellow World");
	}
	return 0;
}

/*

OUTPUT

Hellow World
Hellow World
Hellow World
Hellow World
Hellow World
Hellow World
Hellow World
Hellow World
Hellow World
Hellow World
Hellow World
*/


//PRINT NUMBER 0 TO 10 USING FOR LOOP 
#include<stdio.h>
int main()
{
	for(int i=0; i<=10; i++)
	{
	printf("%d",i);
	}
	return 0;
}

/*
output
0
1
2
3
4
5
6
7
8
9
10
*/
//Programs 20+ numbers and generic programming
//assignment number2

//MULTIPLICATON
#include<stdio.h>
int main()
{
int Num1,Num2,Ans;

printf("\nEnter First Number = ");
scanf("%d",&Num1);

printf("\nEnter Second Number = ");
scanf("%d",&Num2);

Ans=Num1*Num2;

printf("\nAnswer  = %d\n",Ans);


return 0;
}
/*



OUTPUT
Enter First Number = 20

Enter Second Number = 20

Answer  = 400
*/



//Programs 20+ numbers and generic programming
//assignment number1
//Additon
#include<stdio.h>
int main()
{

int Num1,Num2,Ans;

printf("\nEnter First Number = ");
scanf("%d",&Num1);

printf("\nEnter Second Number = ");
scanf("%d",&Num2);

Ans=Num1+Num2;

printf("\nAnswer  = %d\n",Ans);

return 0;
}
/*
OUTPUT

Enter First Number = 20

Enter Second Number = 20

Answer  = 40

*/


//LOGICAL OPERATOR ASSIGNMENT
#include<stdio.h>
int main()
{
int sub1;
int sub2;
int sub3;
printf("Enter marks of sub1 = ");
scanf("%d",&sub1);
printf("Enter marks of sub2 = ");
scanf("%d",&sub2);
printf("Enter marks of sub3 = ");
scanf("%d",&sub3);
if(sub1<35 && sub2<35 && sub3<35)
{
    printf("\n insufficient marks FAIL");
}
else if(sub1>35 && sub2>35 && sub3>35)
{
    printf("\n Pass out student");
}
else if(sub1<35 && sub2>=35 && sub3>=35)
{
     printf("\n Pass with ATKT Reason sub1 = %d ",sub1);
}
else if(sub1>=35 && sub2<35 && sub3>35)
{
    printf("\n Pass with ATKT Reason sub2 =%d ",sub2);
}
else if(sub1>=35 && sub2>=35 && sub3<35)
{
    printf("\n Pass with ATKT Reason sub3 = %d ",sub3);
}
else if(sub1<35 && sub2<35 && sub3>=35)
{
    printf("\nPass with ATKT Reason sub1 = %d AND sub2 = %d",sub1,sub2);
}
else if(sub1>=35 && sub2<35 && sub3<35)
{
    printf("\nPass with ATKT Reason sub2 = %d AND sub3 = %d",sub2,sub3);
}

else if(sub1<35 && sub2>=35 && sub3<35)
{
    printf("\nPass with ATKT Reason sub1 = %d AND sub3 = %d",sub1,sub3);
}
else
{
    printf("\nAbsent in Exam Time");
}
    return 0;
}
/*
OUTPUT

Enter marks of sub1 = 10
Enter marks of sub2 = 10
Enter marks of sub3 = 10

Insufficient marks FAIL
// .\a.exe
Enter marks of sub1 = 10
Enter marks of sub2 = 53
Enter marks of sub3 = 43

 Pass with ATKT Reason sub1 = 10
// .\a.exe
Enter marks of sub1 = 36
Enter marks of sub2 = 35
Enter marks of sub3 = 10

 Pass with ATKT Reason sub3 = 10
 
// .\a.exe
Enter marks of sub1 = 36
Enter marks of sub2 = 10
Enter marks of sub3 = 57

 Pass with ATKT Reason sub2 =10
 
// .\a.exe
Enter marks of sub1 = 10
Enter marks of sub2 = 10
Enter marks of sub3 = 40

Pass with ATKT Reason sub1 = 10 AND sub2 = 10

// .\a.exe
Enter marks of sub1 = 40
Enter marks of sub2 = 10
Enter marks of sub3 = 10

Pass with ATKT Reason sub2 = 10 AND sub3 = 10

// .\a.exe
Enter marks of sub1 = 40
Enter marks of sub2 = 50
Enter marks of sub3 = 10

 Pass with ATKT Reason sub3 = 10

// .\a.exe
Enter marks of sub1 = 10
Enter marks of sub2 = 40
Enter marks of sub3 = 10

Pass with ATKT Reason sub1 = 10 AND sub3 = 10
*/


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



//numbers series Addition of 1 to 100 numbers =5050
#include<stdio.h>
int main()
{
 int a=0;
 int user_input;
 printf("\nEntter your user input value = \n");
 scanf("%d",&user_input);
 
/*
Explaination 
1+2+3+4...........98+99+100
100+99+98.........4+3+2+1
    =101*100
    =10100/2
    =5050 Its final Ans
*/
for(int a=1; a<=user_input; a++)
{
    printf("\nInteger a+a = %d",a*(a+1)/2);
}
    return 0;
}
/* 

OUTPUT 

Entter your user input value =
100

Integer a+a = 1
Integer a+a = 3
Integer a+a = 6
Integer a+a = 10
Integer a+a = 15
Integer a+a = 21
Integer a+a = 28
Integer a+a = 36
Integer a+a = 45
Integer a+a = 55
Integer a+a = 66
Integer a+a = 78
Integer a+a = 91
Integer a+a = 105
Integer a+a = 120
Integer a+a = 136
Integer a+a = 153
Integer a+a = 171
Integer a+a = 190
Integer a+a = 210
Integer a+a = 231
Integer a+a = 253
Integer a+a = 276
Integer a+a = 300
Integer a+a = 325
Integer a+a = 351
Integer a+a = 378
Integer a+a = 406
Integer a+a = 435
Integer a+a = 465
Integer a+a = 496
Integer a+a = 528
Integer a+a = 561
Integer a+a = 595
Integer a+a = 630
Integer a+a = 666
Integer a+a = 703
Integer a+a = 741
Integer a+a = 780
Integer a+a = 820
Integer a+a = 861
Integer a+a = 903
Integer a+a = 946
Integer a+a = 990
Integer a+a = 1035
Integer a+a = 1081
Integer a+a = 1128
Integer a+a = 1176
Integer a+a = 1225
Integer a+a = 1275
Integer a+a = 1326
Integer a+a = 1378
Integer a+a = 1431
Integer a+a = 1485
Integer a+a = 1540
Integer a+a = 1596
Integer a+a = 1653
Integer a+a = 1711
Integer a+a = 1770
Integer a+a = 1830
Integer a+a = 1891
Integer a+a = 1953
Integer a+a = 2016
Integer a+a = 2080
Integer a+a = 2145
Integer a+a = 2211
Integer a+a = 2278
Integer a+a = 2346
Integer a+a = 2415
Integer a+a = 2485
Integer a+a = 2556
Integer a+a = 2628
Integer a+a = 2701
Integer a+a = 2775
Integer a+a = 2850
Integer a+a = 2926
Integer a+a = 3003
Integer a+a = 3081
Integer a+a = 3160
Integer a+a = 3240
Integer a+a = 3321
Integer a+a = 3403
Integer a+a = 3486
Integer a+a = 3570
Integer a+a = 3655
Integer a+a = 3741
Integer a+a = 3828
Integer a+a = 3916
Integer a+a = 4005
Integer a+a = 4095
Integer a+a = 4186
Integer a+a = 4278
Integer a+a = 4371
Integer a+a = 4465
Integer a+a = 4560
Integer a+a = 4656
Integer a+a = 4753
Integer a+a = 4851
Integer a+a = 4950
Integer a+a = 5050
*/




//NUMBER SERIES
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



//Programs 20+ numbers and generic programming
//assignment number7 ODD NUMBERS

#include<stdio.h>
int main()
{
int Num1;
for(Num1=0; Num1<=20; Num1++)
if(Num1%2 == !0)
{
printf("\nOdd Numbers 1 to 20 = %d",Num1);
}
printf("\nAbove Output is printed\n\n");
return 0;
}
/*
OUTPUT

Odd Numbers 1 to 20 = 1
Odd Numbers 1 to 20 = 3
Odd Numbers 1 to 20 = 5
Odd Numbers 1 to 20 = 7
Odd Numbers 1 to 20 = 9
Odd Numbers 1 to 20 = 11
Odd Numbers 1 to 20 = 13
Odd Numbers 1 to 20 = 15
Odd Numbers 1 to 20 = 17
Odd Numbers 1 to 20 = 19
Above Output is printed
*/



//Programs 20+ numbers and generic programming
//assignment number6

#include<stdio.h>
int main()
{
int Num1;
for(Num1=0; Num1<=20; Num1++)

//if(Num1%2)
if(Num1%2 == 0)
{
printf("\nEven Numbers 1 to 20 = %d",Num1);
}
printf("\nAbove Output is printed\n\n");


return 0;
}
/*
OUTPUT

Even Numbers 1 to 20 = 0
Even Numbers 1 to 20 = 2
Even Numbers 1 to 20 = 4
Even Numbers 1 to 20 = 6
Even Numbers 1 to 20 = 8
Even Numbers 1 to 20 = 10
Even Numbers 1 to 20 = 12
Even Numbers 1 to 20 = 14
Even Numbers 1 to 20 = 16
Even Numbers 1 to 20 = 18
Even Numbers 1 to 20 = 20
Above Output is printed
*/




//Programs 20+ numbers and generic programming

//assignment number3
#include<stdio.h>
int main()
{
float Num1,Num2,Ans;

printf("\nEnter First Number = ");
scanf("%f",&Num1);

printf("\nEnter Second Number = ");
scanf("%f",&Num2);

Ans=Num1/Num2;

printf("\nAnswer  = %.2f\n",Ans);

return 0;
}
/*
OUTPUT


Enter First Number = 10

Enter Second Number = 20

Answer  = 0.50
*/









//Logical operators
#include <stdio.h>
int main()
{
int a = 8;
int b = 8;
int c = 12;
int Ans;

//Ans = (a == b) && (c > b);
if(a == b && c > b)
{
printf("(iF a == b) AND (c > b) = %d \n", Ans);
}
Ans = (a == b) && (c < b);
{
printf("(If a == b) AND (c < b) = %d \n", Ans);
}

Ans = (a == b) || (c < b);
{
printf("(If a == b) OR (c < b) = %d \n", Ans);
}
Ans = (a != b) || (c < b);
{
printf("( If a != b) OR (c < b) = %d \n", Ans);
}
Ans = !(a != b);
{
printf("!(If a == b) = %d \n", Ans);
}
Ans = !(a == b);
{
printf("!(If a == b) = %d \n", Ans);
}
return 0;
}
/*output

(iF a == b) AND (c > b) = 4201056 
(If a == b) AND (c < b) = 0 
(If a == b) OR (c < b) = 1 
( If a != b) OR (c < b) = 0 
!(If a == b) = 1 
!(If a == b) = 0 
*/




//C Program using arithmetic operators

#include <stdio.h>
int main()
{
int a = 12, b = 6, c;
c = a + b;
printf("a+b = %d \n", c);
c = a - b;
printf("a-b = %d \n", c);
c = a *b;
printf("a*b = %d \n", c);
c = a / b;
printf("a/b = %d \n", c);
c = a % b;
printf("a Mod b  = %d \n", c);
return 0;
}
/*
output

a+b = 18 
a-b = 6
a*b = 72
a/b = 2
a Mod b  = 0
*/




//relational operators use
#include <stdio.h>
int main()
{
int a = 7;
int b = 7;
int c = 9;
   
printf("  If integer %d == %d Then Answer =  %d \n", a, b, a == b);    // true
printf("  If integer %d <  %d Then Answer =  %d \n", a, c, a < c);    //true
printf("  If integer %d != %d Then Answer =  %d \n", a, c, a != c);    //true
printf("  If integer %d >= %d Then Answer =  %d \n", a, b, a >= b);    //true
printf("  If integer %d <= %d Then Answer =  %d \n", a, b, a <= b);    //true
printf("  If integer %d <= %d Then Answer =  %d \n", a, c, a <= c);    //true
printf("  If integer %d != %d Then Answer =  %d \n", a, b, a != b);    //false
printf("  If integer %d >= %d Then Answer =  %d \n", a, c, a >= c);    //false
printf("  If integer %d == %d Then Answer =  %d \n", a, c, a == c);    // false
printf("  If integer %d >  %d Then Answer =  %d \n", a, b, a > b);    //false
printf("  If integer %d >  %d Then Answer =  %d \n", a, c, a > c);    //false
printf("  If integer %d <  %d Then Answer =  %d \n", a, b, a < b);    //false

return 0;
}
/*
OUTPUT

  If integer 7 == 7 Then Answer =  1 
  If integer 7 <  9 Then Answer =  1 
  If integer 7 != 9 Then Answer =  1 
  If integer 7 >= 7 Then Answer =  1 
  If integer 7 <= 7 Then Answer =  1 
  If integer 7 <= 9 Then Answer =  1 
  If integer 7 != 7 Then Answer =  0
  If integer 7 >= 9 Then Answer =  0
  If integer 7 == 9 Then Answer =  0
  If integer 7 >  7 Then Answer =  0
  If integer 7 >  9 Then Answer =  0
  If integer 7 <  7 Then Answer =  0
*/



//NUMBER SERIES
#include<stdio.h>
int main()
{
    int num;
    int num2;
    int sum=0;
    
    printf("Enter the Expected values of series: ");
    scanf("%d",&num);
    sum = (num * (num + 1)) / 2;
    printf("Sum of the series: ");
    for(num2 =1; num2<= num; num2++)
         {
         if (num2!=num)
             printf("%d + ",num2);
         else
             printf("%d ",sum);

         }
    return 0;
}

/*
OUTPUT

Enter the Expected values of series: 100
Sum of the series: 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 + 11 + 12 + 13 
+ 14 + 15 + 16 + 17 + 18 + 19 + 20 + 21 + 22 + 23 + 24 + 25 + 26 + 27 + 
28 + 29 + 30 + 31 + 32 + 33 + 34 + 35 + 36 + 37 + 38 + 39 + 40 + 41 + 42 
+ 43 + 44 + 45 + 46 + 47 + 48 + 49 + 50 + 51 + 52 + 53 + 54 + 55 + 56 + 
57 + 58 + 59 + 60 + 61 + 62 + 63 + 64 + 65 + 66 + 67 + 68 + 69 + 70 + 71 +
 72 + 73 + 74 + 75 + 76 + 77 + 78 + 79 + 80 + 81 + 82 + 83 + 84 + 85 + 86 
 + 87 + 88 + 89 + 90 + 91 + 92 + 93 + 94 + 95 + 96 + 97 + 98 + 99 + 100 = 5050

*/



//numbers series Addition of 1 to 100 numbers =5050
#include<stdio.h>
int main()
{
 int a=0;
 int user_input;
 printf("\nEntter your user input value = \n");
 scanf("%d",&user_input);
 
/*
Explaination 
1+2+3+4...........98+99+100
100+99+98.........4+3+2+1
    =101*100
    =10100/2
    =5050 Its final Ans
*/
for(int a=1; a<=user_input; a++)
{
    printf("\nInteger a+a = %d",a*(a+1)/2);
}
    return 0;
}
/* 

OUTPUT 

Entter your user input value =
100

Integer a+a = 1
Integer a+a = 3
Integer a+a = 6
Integer a+a = 10
Integer a+a = 15
Integer a+a = 21
Integer a+a = 28
Integer a+a = 36
Integer a+a = 45
Integer a+a = 55
Integer a+a = 66
Integer a+a = 78
Integer a+a = 91
Integer a+a = 105
Integer a+a = 120
Integer a+a = 136
Integer a+a = 153
Integer a+a = 171
Integer a+a = 190
Integer a+a = 210
Integer a+a = 231
Integer a+a = 253
Integer a+a = 276
Integer a+a = 300
Integer a+a = 325
Integer a+a = 351
Integer a+a = 378
Integer a+a = 406
Integer a+a = 435
Integer a+a = 465
Integer a+a = 496
Integer a+a = 528
Integer a+a = 561
Integer a+a = 595
Integer a+a = 630
Integer a+a = 666
Integer a+a = 703
Integer a+a = 741
Integer a+a = 780
Integer a+a = 820
Integer a+a = 861
Integer a+a = 903
Integer a+a = 946
Integer a+a = 990
Integer a+a = 1035
Integer a+a = 1081
Integer a+a = 1128
Integer a+a = 1176
Integer a+a = 1225
Integer a+a = 1275
Integer a+a = 1326
Integer a+a = 1378
Integer a+a = 1431
Integer a+a = 1485
Integer a+a = 1540
Integer a+a = 1596
Integer a+a = 1653
Integer a+a = 1711
Integer a+a = 1770
Integer a+a = 1830
Integer a+a = 1891
Integer a+a = 1953
Integer a+a = 2016
Integer a+a = 2080
Integer a+a = 2145
Integer a+a = 2211
Integer a+a = 2278
Integer a+a = 2346
Integer a+a = 2415
Integer a+a = 2485
Integer a+a = 2556
Integer a+a = 2628
Integer a+a = 2701
Integer a+a = 2775
Integer a+a = 2850
Integer a+a = 2926
Integer a+a = 3003
Integer a+a = 3081
Integer a+a = 3160
Integer a+a = 3240
Integer a+a = 3321
Integer a+a = 3403
Integer a+a = 3486
Integer a+a = 3570
Integer a+a = 3655
Integer a+a = 3741
Integer a+a = 3828
Integer a+a = 3916
Integer a+a = 4005
Integer a+a = 4095
Integer a+a = 4186
Integer a+a = 4278
Integer a+a = 4371
Integer a+a = 4465
Integer a+a = 4560
Integer a+a = 4656
Integer a+a = 4753
Integer a+a = 4851
Integer a+a = 4950
Integer a+a = 5050
*/


//java hello wolrd program


import java.lang.*;
class Hello_world
{

    public static void main(String argd[])
    {
        System.out.println("Hellow World");
    }
}
/*
OUTPUT

Hellow World

*/

//python hello world program

print("Hello, world.....!")

/*OUTPUT

Hello, world.....!

*/


//Hello world program in C++
#include<iostream>

int main()
{
    std::cout<< "Hello World.....!";
	
    return 0;
}
/
	OUTPUT
	
	Hello World.....!
/