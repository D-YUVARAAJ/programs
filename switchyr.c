/*my goal is to find whether the user pressed a number that is in range */
/*2nd one is calc prg see the code calculatorprg.yr*/

#include<stdio.h>
void main()
{
    int a;
    printf("enter the number ");
    scanf("%d",&a);

    switch(a)
    {
        case 1 ... 10:
        printf("btwn 1 to 10");
        break;

        case 11 ... 20:
        printf("btwn 11 to 20");
        break;

        case 21 ... 30:
        printf("btwn 21 to 30 ");
        break;
        default:
        printf("its more than 30 or should be less than 1");
        break;

    }
}
