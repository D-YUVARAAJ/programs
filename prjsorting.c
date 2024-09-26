#include<stdio.h>
void main()
{
    int size;
    int b;
    printf("enter the total size of numbers  ");
    scanf("%d",&size);

        // get the numbers to store in array 
        
    int numbers[size];
    printf("enter the numbers to sort:\n");
    for(int i=0;i<(size);i++)
    {
        printf("---->");
        scanf("%d",&numbers[i]);
    }

    //start the sort process use the x and  y    for index i use in1 and in2

    for(int x= 0;x<(size);x++)    //sorting process takes place evertime in all the index  
    {
        for(int y=0;y<=(size-2);y++) //this is the actual sorting process in every index inside (size-2)so y+1 is crt
        {
            if(numbers[y]>numbers[y+1])
            {
                //swapping code
                b=numbers[y+1];
                numbers[y+1]=numbers[y];
                numbers[y]=b;
            }
        }
    }











        //display sorted one 
        printf("SORTED ANSWER IS VVV\n");
        for(int op=0;op<(size);op++)
        {
            printf("%d  ",numbers[op]);
        }

}