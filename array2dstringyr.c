//to print the matrix structured names using 3d array 
/*char name[2][3][30]={{"name 1","nmae2","nmae3"},
                    {"peru 1","peru2","peru3"}};
            
    for (int i =0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%s\t",name[i][j]);
        }

        putchar('\n');
    }
*/


//to get the names of student and turn it in the capital letters 
#include<stdio.h>
#include<string.h>
void main()
{
    int i;
    printf("enter the students total count ");
    scanf("%d",&i);

    char name[i][30];

    for(int j=0;j<i;j++)
    {
        printf("name%d:",j);
        scanf("%s",&name[j]);

    }

    for(int x=0;x<i;x++)
    {
        strupr(name[x]);
    }

    for(int y=0;y<i;y++)
    {
        printf("student%d:%s\n",y,name[y]);

    }






                
}








