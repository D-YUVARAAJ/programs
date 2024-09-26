/*#include<stdio.h>               //while loop to add nos until it reaches the <0 value 
void main()
{
    int a=1;
    int b;
    int sum=0;
    while(a>0)
    {                                                                       //while
        printf("enter ur value to add");
        scanf("%d",&b);
        a=b;
        sum=sum+a;

    }
    printf("%d",sum);
}
*/

/*#include<stdio.h>
void main()
{
    int i=0;

    do
    {
        printf("hi :%d\n",i);                       //do while loop
        i++;
    } while (i<=10);
    
}
*/

//using for loop getting total class strength and checking whether they ar epass or failed the exam 

#include<stdio.h>
#include<math.h>
#include<string.h>

void main()
{
    int count;
    double mark,rounded;
    char heart = 3;
    char nanri[]="thanks for using the pass/fail analyzer";

    printf("\nenter a  how many students u wanna check pass or fail:");
    scanf("%d",&count);

    for (int i=1;i<=count;i++)
    {
        printf("\nenter student %d mark :",i);
        scanf("%lf",&mark);
        rounded = round(mark);

        if(rounded<40 )
        {
            printf("u failed in exam , but passed in teachers heart");
        }

        else
        {
            printf("u passed both in exam and staff heart %c%c%c",heart,heart,heart);
        }
        

        
    }

    
    strupr(nanri);
    printf("\n%s",nanri);


}