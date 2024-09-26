                                                                                            //if loop 
/*#include<stdio.h>
void main()
{
    int number;
    char ans;
    printf("enter a number to find whether its odd or even :");
    scanf("%d",&number);
    if(number%2==0)
    {
        printf("\nits even");
        printf("\ndo u want to continue ?");
        scanf(" %c",&ans);
        if(ans=='y'|| ans=='Y' )
        {
            printf("\nthanks for continuing but server down lol");

        }
        else{
            printf("\npoitu va");
        }
    }

    else{
        printf("\nthe number is odd");
    }
}*/


                                                                                //using for loop

#include<stdio.h>
void main()
{
    printf("main goal is to print the tables of all \n ");

    int table=12,till=15;
    for (int i=1;i<=table;i++)
    {
        for(int j=1;j<=till;j++)
        {
            printf("%dx%d=%6d\n",i,j,(i*j));
        }

        putchar('\n');
    }



}