#include<stdio.h>
int main()
{
	//local Variable Declarations
    int num1;
    int num2;
    int ans;

     num1 =10;
     num2=20;
    //function declaration
    int addition(int n1,int n2);
    ans=addition(num1,num2);
    printf(" ans = %d",ans);
	return(0);
}
int addition(int n1,int n2)
{
    //local variable declaration
    int ans;
    ans=n1+n2;
   
    return(ans);
}