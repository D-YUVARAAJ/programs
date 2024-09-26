/*variables are allocated memory to store a value 
variables nmaes are used to acces the stored value and access it 
declare what type of variable we are storing */

/*defines and formats the type of data to be displayed  */

#include<stdio.h>
void main()
{
    int variable1=35;
    int variable2 = 65;                         //integer

    unsigned char character=200  ;                             //character use single quote

    float floatu= 83.5;                             //float  is single precision floating point 
    double doubleu= 44.666;                         //double precision floating point 

    char stringg[] ="vanakam ";          //to create a string with series of characters basically an array
    

/*format specifier*/
    printf("%s",stringg);                  //string

    printf("%d",variable1+variable2);               //int
    printf("\n %s . naan 12th std la for %d ku %f mark eduthen . en name starts with %c . ithuthan double %lf",stringg,(variable1+variable2),floatu,character,doubleu);
    printf(" \nSTART  %50.6f ithula 50.6 koduthen for 83.5 value , so 50 spsce vittu then upto 6 decimal kaatum ",floatu);
}