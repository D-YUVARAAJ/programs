#include <stdio.h>
#include<stdlib.h>


struct employee{
    char name[50];
    int employee_id ;
    float salary;
    int age;
};

void inputemployeedetail(struct employee workers[],int);        //it needs the structure to be defined before it is using so put struct above
void outputemployeedetails(struct employee workers[],int);



void inputemployeedetail(struct employee workers[],int i)       //workers array whole iruku struct employee is the datatype here
{
    printf("enter the name of worker%d",i);
    scanf("%s",&workers[i-1].name);
    printf("enter the employee id of worker %s",workers[i-1].name);
    scanf("%d",&workers[i-1].employee_id);
    printf("enter the salary of worker %s",workers[i-1].name);
    scanf("%f",&workers[i-1].salary);
    printf("enter the age of worker %s",workers[i-1].name);
    scanf("%d",&workers[i-1].age);
}

void outputemployeedetails( struct employee workers[],int j)
{
 printf("employee name:%s\nemployee id:%d\nemployee salary:%f\nemployee age:%d\n",workers[j-1].name,workers[j-1].employee_id,workers[j-1].salary,workers[j-1].age);
 putchar('\n');
}









void main()
{
    system("cls");


  struct employee workers[3];
  int sum=0;
  int avg;
    for(int i=1;i<=3;i++){
        inputemployeedetail(workers,i);  //whole workers array is passed 
    }



    system("cls"); //used to clear the terminal screen like clrscr but this is for modern c lib



    for(int j=1;j<=3;j++)
    {
        outputemployeedetails(workers,j); 
    }

    for(int k=1;k<=3;k++)
    {
        sum= workers[k-1].salary+sum;

        
    }
    avg= sum/3;
    printf("the average of all the salary is %d",avg);
    

}
