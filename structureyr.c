#include<stdio.h>
#include<string.h>
struct work
    {
    int phone_no;
    char name[20];
    float salary;
    };
void main()
{
    printf("structure pathi im going to see ");
    

     struct work electrician;
     struct work plumber;


     electrician.phone_no =9873211;
     plumber.phone_no = 123456789;

    strcpy(electrician.name,"menporiyaalan");
    strcpy(plumber.name,"pelambar");


    printf(" electrician number is%d",electrician.phone_no);
    printf("\n his name is %s ",electrician.name);

    printf("\n plumber phone no is %d",plumber.phone_no);
    printf("\n plumber name is %s",plumber.name);


    

}