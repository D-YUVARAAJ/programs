/*#include<stdio.h>
void main()
{
    printf("going to print the matrix  in 2 d array\n");
    int row[2][4]={{1,2,3,4},
                   {5,6,7,8}};

    for(int i =0;i<=1;i++)
    {
        for(int j=0;j<=3;j++)
            {
                printf("%d",row[i][j]);
            }
            putchar('\n');
    }

    
}*/



//mtrix addition pannaporen 




#include<stdio.h>
void main()
{
    int row,col;
    

    printf("enter th size of matrix row and column:");
    scanf("%d%d",&row,&col);
    printf("ur matrix size would be %dx%d",row,col);

    int mat1[row][col],mat2[row][col],added[row][col];

    printf("\nenter the matrix values for 1st matrix\n");

    for (int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                printf("%dx%d:",i,j);
                scanf("%d",&mat1[i][j]);
            }

        }


    printf("enter teh matrix value for 2nd matrix\n");

    for(int l=0;l<row;l++)
    {
        for (int m=0;m<col;m++)
        {
            printf("%dx%d:",l,m);
            scanf("%d",&mat2[l][m]);
        }
    }

    printf("ur added value of both matrix is \n");

    for(int x=0;x<row;x++)
    {
        for(int y=0;y<col;y++)  
        {
        added[x][y]=mat1[x][y]+mat2[x][y];
        printf("%d\t",added[x][y]);
        }
    
    putchar('\n');

    }
    

}