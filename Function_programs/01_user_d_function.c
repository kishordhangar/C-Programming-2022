#include<stdio.h>

int main()
{
	//local Variable Declarations



    

    //function declaration
    void display_message(char str[]);
    display_message("Kishor");
     display_message("kajal");
      display_message("Yash");


	return(0);
}

void display_message(char str[])
{
    printf(" \n Hello %s",str);

}