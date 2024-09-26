#include<stdio.h>
void main()
{
    int table,till;
    printf("enter the number till u want table :");
    scanf("%d",&table);
    printf("till");
      scanf("%d",&till);

    for (int i=0;i<=10000000;i++)
    {
        if(i==table)
        {
            break;
        }

        for(int j=0;j<=till;j++)
        {
            if(j%2==0)
            {
                continue;
            }
             printf(" see the odd numbers multiply lol%dx%d=%6d\n",i,j,(i*j));
        }
    }
}