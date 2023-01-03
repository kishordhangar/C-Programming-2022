#include<stdio.h>
int main()
{

char Char1 = 'k';

char* Char2;
Char2 = &Char1;


printf("\n stored Character = %c",Char1);
printf("\n Address of stored Character = %p",Char1);
printf("\n stored Character copy in Char2 = %c",Char2);
printf("\n stored Character copy in Char2 = %c",*Char2);

*Char2 = 'D';
printf("\n use stored Character modify and copy again in Char2 = %c",*Char2);

printf("\n To check Modified char succceefully stored or not in Char1 = %c",Char1);


printf("\n");

printf("\n");

    return 0;
}

/*
OUTPUT


 stored Character = k
 Address of stored Character = 0000006B
 stored Character copy in Char2 = ←
 stored Character copy in Char2 = k
 use stored Character modify and copy again in Char2 = D
 To check Modified char succceefully stored or not in Char1 = D
*/