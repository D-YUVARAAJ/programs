/*\n new line 
\t tab space 
\ */

#include<stdio.h>
void main ()
{
    int a;
    printf("im doing this in \n new line . now this will be with a tab space \t vanthucgha  ?\n");
    for (a=0;a<=11;a++)
    {
        
        if(a%2==0)
        {
            printf("\t%d\t",a);
        }
        else{
            printf("%d\n",a);
        }
    }
}