//i tried the lpa to monthly salary amount calucaltor using functions




//see yhe notebook mianly for this sum 








#include<stdio.h>
double lpa_to_month(int);      //funct decalaration

void main()
{
    int lpa;
    double converted;
    printf("enter ur lpa :\t");
    scanf("%d",&lpa);

    converted = lpa_to_month(lpa);          //calling funct argument
    printf("\n u will get Rs %4.2lf monthly for annual amount of Rs %d ",converted,lpa);
}

double lpa_to_month(int thogai)            // parameter clled funct
{
    double maasam ;
  maasam = (thogai/12);
  return maasam;
}

