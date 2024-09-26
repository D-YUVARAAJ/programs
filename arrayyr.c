#include<stdio.h>
void main()
{ 
    //to get the numbers , store in arry and display them 

    int sizee;
    
    printf("enter how many numbers to store in array");
    scanf("%d",&sizee);

    int arrai[sizee];

    for (int i=0;i<sizee;i++)
    {
        printf("\nnumber%d:",i);
        scanf("%d",&arrai[i]);

    }

    for(int j=0;j<sizee;j++)
    {
        printf("%d\n",arrai[j]);
    }

    


}










/*
//to print the numbers in array 
    int rollno[]={1,2,3,4,5,6,7,8,9,11};              //  psition is 10 and index is 0to9 
    int total =sizeof(rollno)/sizeof(rollno[0]);
    

    for(int i=0;i<total;i++)
    {
        printf("%d\n",rollno[i]);
    }
    */