/*goal is to print the character equivalent alphabet from -128 to 127*/



#include<stdio.h>
void main()
{
    
    int start= -128;
    int end =127;
    char symbol =5;
    printf("char ku equivalent aana alphabet");

    for(start;start<=end;start++)  //-128;-128<=+127;increment start
    {
        printf("\tcharacter %d %c%c%c %c\n ",start,symbol,symbol,symbol,start);
    }
}