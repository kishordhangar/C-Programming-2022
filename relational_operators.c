
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