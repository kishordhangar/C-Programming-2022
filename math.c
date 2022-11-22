
/*
    INPUT

*/



// USING FUNCTION FOR MULTIPLE OPERATINE AT A TIME
#include<stdio.h>
int main()
{
    printf("\n*MY TODYAS ASSIGNMENT AS GIVES BELOW \n");


printf("\n*TO GET USER INPUT A AND B AND PRINT OUT THE FOLLOWING OPERATIONS\n");

//a,b are the identifiers of int datataypes(that means local variable declaration)
int a;
int b;

printf("Enter first num= ");
scanf("%d",&a);
printf("Enter second num= ");
scanf("%d",&b);
printf("\n Addition of two number's=%d ",a+b);
printf("\n Division of two number's=%d ",a/b);
printf("\n multiplication of two number's=%d ",a*b);
printf("\n substarction of two number's=%d ",a-b);


    //function declaration

void hello_world();
    hello_world();

void hello_world_loop();
    hello_world_loop();

void arithmetic();
    arithmetic();

void Division();
    Division();

void substraction();
    substraction();

void multiplication();
    multiplication();

void addition();
    addition();

    void size_of_datatypes();
    size_of_datatypes();

    void ascii_value_character();
        ascii_value_character();

    void ascii_0_to_126();
        ascii_0_to_126();



return 0;
}

void hello_world()
{
    printf("\n*TO PRINT SIMPLE HELLO WORLD PROGRAM\n");

    printf("\nhello_world\n");
}

void hello_world_loop()
{

    printf("\n*TO PRINT USING FOR LOOP AND PRINT HELLO WORLD PROGRAM\n");
   
    for(int i=0; i<=10; i++)
        {
        printf("\nhello_world=%d\n",i);
        }
}
 //To print the arithmetic operations of two int values 

void arithmetic()
{

    printf("\n*TO USE A= 3 AND B=7 AND PRINT OUT FOLLOWING OPERATIONS \n");
int a=3;
int b= 7;
printf("\nSubstraction of two number's=%d\n",a-b);

printf("\nAddition of two number's=%d\n",a+b);

printf("\nDivision of two number's=%d\n",a/b);

printf("\nMultiplication of two number's=%d\n",a*b);

}
 //To print the Division of two int values 

void Division()
{
  //.
  
    printf("\n*TO USE A = 4 AND B=  6 AND PRINT OUT FOLLOWING OPERATIONS \n");
int a=4;
int b=6;
int c;
c=a/b;
printf("\nDivision of two number's=%d",c);

}
 //To print the Substraction of two int values 

void substraction()
{
  //.
  
    printf("\n*TO USE A= 5 AND B= 7 AND PRINT OUT FOLLOWING OPERATIONS \n");
int a=5;
int b=9;
int c;
c=a-b;
printf("\nSubstraction of two number's=%d",c);

}
 //To print the Multiplication of two int values 

void multiplication()
{
  //.
  
    printf("\n*TO USE A= 1 AND B= 3 AND PRINT OUT FOLLOWING OPERATIONS \n");
int a=1;
int b=3;
int c;
c=a*b;

printf("\nMultiplication of two number's=%d",c);

}
 //To print the addition of two int values 

void addition()
{
    
    printf("\n*TO USE A= 1 AND B= 2 AND PRINT OUT FOLLOWING OPERATIONS \n");

int a=1;  //.
int b= 2;
int c;
c=a+b;

printf("\naddition of two number's=%d",c);

}
void size_of_datatypes()
{


    printf("\n*TO PRINT SIZE OF DATATYPES IN C OF THE FOLLOWING \n");

int i_no;
char c;
float f;
double d;
signed s;
signed int s_i_on;
unsigned int us_i_no;
signed char s_c;
unsigned char us_c;


printf("\nSize of integer =  %d",sizeof(i_no));

printf("\nSize of Character =%d",sizeof(c));

printf("\nSize of Float =    %d",sizeof(f));

printf("\nSize of Double =   %d",sizeof(d));

printf("\nSize of signed int=%d",sizeof(s_i_on));

printf("\nSize of unsigned in=%d",sizeof(us_i_no));

printf("\nSize of signed char =%d",sizeof(s_c));

printf("\nSize of unsigned char=%d",sizeof(us_c));

}

void ascii_value_character()
{

    printf("\n*TO PRINT ASCII VALUE \n");
    char c;
    printf("Enter a character: "); 
    scanf("%c",&c);
    
    printf("ASCII value of %c = %d", c, c);
    
    

}

void ascii_0_to_126()
{
   
    printf("\n*TO USE FOR LOOP AND PRINT OUT ASCII VALUE OF 0 TO 126 NUMBERS \n");

    // ascii value 0 to 126
    for (char i = 0; i <= 126; i++) 
    {
        printf("The ASCII value of = %d = %c \n", i, i);
    }
}

/*
        OUTPUT





        PS C:\Users\DELL\OneDrive\Documents\GitHub\C-Programming-2022> gcc .\math.c
        PS C:\Users\DELL\OneDrive\Documents\GitHub\C-Programming-2022> .\a.exe

*MY TODYAS ASSIGNMENT AS GIVES BELOW 

*TO GET USER INPUT A AND B AND PRINT OUT THE FOLLOWING OPERATIONS
Enter first num= 1
Enter second num= 2

 Addition of two number's=3
 Division of two number's=0
 multiplication of two number's=2
 substarction of two number's=-1

*TO PRINT SIMPLE HELLO WORLD PROGRAM

hello_world

*TO PRINT USING FOR LOOP AND PRINT HELLO WORLD PROGRAM

hello_world=0

hello_world=1

hello_world=2

hello_world=3

hello_world=4

hello_world=5

hello_world=6

hello_world=7

hello_world=8

hello_world=9

hello_world=10

*TO USE A= 3 AND B=7 AND PRINT OUT FOLLOWING OPERATIONS

Substraction of two number's=-4

Addition of two number's=10

Division of two number's=0

Multiplication of two number's=21

*TO USE A = 4 AND B=  6 AND PRINT OUT FOLLOWING OPERATIONS

Division of two number's=0
*TO USE A= 5 AND B= 7 AND PRINT OUT FOLLOWING OPERATIONS

Substraction of two number's=-4
*TO USE A= 1 AND B= 3 AND PRINT OUT FOLLOWING OPERATIONS

Multiplication of two number's=3
*TO USE A= 1 AND B= 2 AND PRINT OUT FOLLOWING OPERATIONS

addition of two number's=3
*TO PRINT SIZE OF DATATYPES IN C OF THE FOLLOWING

Size of integer =  4
Size of Character =1
Size of Float =    4
Size of Double =   8
Size of signed int=4
Size of unsigned in=4
Size of signed char =1
Size of unsigned char=1
*TO PRINT ASCII VALUE
Enter a character: ASCII value of
 = 10
*TO USE FOR LOOP AND PRINT OUT ASCII VALUE OF 0 TO 126 NUMBERS
The ASCII value of =  = 0
The ASCII value of = ☺ = 1
The ASCII value of = ☻ = 2
The ASCII value of = ♥ = 3 
The ASCII value of = ♦ = 4
The ASCII value of = ♣ = 5
The ASCII value of = ♠ = 6
The ASCII value of =  = 7
The ASCII value of = = 8
The ASCII value of =     = 9
The ASCII value of =
 = 10
The ASCII value of =
 = 11
The ASCII value of =
 = 12
 = 13 CII value of =
The ASCII value of =  = 14
The ASCII value of =  = 15
The ASCII value of = ► = 16
The ASCII value of = ◄ = 17
The ASCII value of = ↕ = 18
The ASCII value of = ‼ = 19
The ASCII value of = ¶ = 20
The ASCII value of = § = 21
The ASCII value of = ▬ = 22
The ASCII value of = ↨ = 23
The ASCII value of = ↑ = 24
The ASCII value of = ↓ = 25
The ASCII value of = → = 26
The ASCII value of =  27 
The ASCII value of = ∟ = 28
The ASCII value of = ↔ = 29
The ASCII value of = ▲ = 30
The ASCII value of = ▼ = 31
The ASCII value of =   = 32
The ASCII value of = ! = 33
The ASCII value of = " = 34
The ASCII value of = # = 35
The ASCII value of = $ = 36
The ASCII value of = % = 37
The ASCII value of = & = 38
The ASCII value of = ' = 39
The ASCII value of = ( = 40
The ASCII value of = ) = 41
The ASCII value of = * = 42
The ASCII value of = + = 43
The ASCII value of = , = 44
The ASCII value of = - = 45
The ASCII value of = . = 46
The ASCII value of = / = 47
The ASCII value of = 0 = 48
The ASCII value of = 1 = 49
The ASCII value of = 2 = 50
The ASCII value of = 3 = 51
The ASCII value of = 4 = 52
The ASCII value of = 5 = 53
The ASCII value of = 6 = 54 
The ASCII value of = 7 = 55
The ASCII value of = 8 = 56
The ASCII value of = 9 = 57
The ASCII value of = : = 58
The ASCII value of = ; = 59
The ASCII value of = < = 60
The ASCII value of = = = 61
The ASCII value of = > = 62
The ASCII value of = ? = 63
The ASCII value of = @ = 64
The ASCII value of = A = 65
The ASCII value of = B = 66
The ASCII value of = C = 67
The ASCII value of = D = 68
The ASCII value of = E = 69
The ASCII value of = F = 70
The ASCII value of = G = 71
The ASCII value of = H = 72
The ASCII value of = I = 73
The ASCII value of = J = 74
The ASCII value of = K = 75
The ASCII value of = L = 76
The ASCII value of = M = 77
The ASCII value of = N = 78
The ASCII value of = O = 79
The ASCII value of = P = 80 
The ASCII value of = Q = 81
The ASCII value of = R = 82
The ASCII value of = S = 83
The ASCII value of = T = 84
The ASCII value of = U = 85
The ASCII value of = V = 86
The ASCII value of = W = 87
The ASCII value of = X = 88
The ASCII value of = Y = 89
The ASCII value of = Z = 90
The ASCII value of = [ = 91
The ASCII value of = \ = 92
The ASCII value of = ] = 93
The ASCII value of = ^ = 94
The ASCII value of = _ = 95
The ASCII value of = ` = 96
The ASCII value of = a = 97
The ASCII value of = b = 98
The ASCII value of = c = 99
The ASCII value of = d = 100
The ASCII value of = e = 101
The ASCII value of = f = 102
The ASCII value of = g = 103
The ASCII value of = h = 104
The ASCII value of = i = 105
The ASCII value of = j = 106 
The ASCII value of = k = 107
The ASCII value of = l = 108
The ASCII value of = m = 109
The ASCII value of = n = 110
The ASCII value of = o = 111
The ASCII value of = p = 112
The ASCII value of = q = 113
The ASCII value of = r = 114
The ASCII value of = s = 115
The ASCII value of = t = 116
The ASCII value of = u = 117
The ASCII value of = v = 118
The ASCII value of = w = 119
The ASCII value of = x = 120
The ASCII value of = y = 121
The ASCII value of = z = 122
The ASCII value of = ~ = 126


*/