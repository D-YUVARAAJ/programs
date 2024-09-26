#include<stdio.h>
#include<string.h>
void main()
{
    char a[] = "The tablet dispenser will have three circular disks with 30 compartments, designed to release tablets at specific times of the day. The system will track when the medicine is taken and notify the caretaker via SMS";
    char b[] = "YUVA";

    //strupr(a);
    //strlwr(a);

    //strcat(a,b);                            // adds b to a , op is yuvaraaj
    //strncat(a,b,2);                             //mentioned values alavu from b it adds to a,op is yuvara
    
    //strcpy(a,b);                                //copies b value to a ,op is a=raaj,b=raaj
    //strncpy(a,b,3);                             //replaces b value in a with mentioned value op is (a,b,1 is ruva)(a,b,3 israaa )raa from b , last a is from a[]

    //strset(a,'X');                  //replaces the whole set of a to mentioned char  op is XXXX
    //strnset(a,'C',2);               //replaces the mentioned amt of set value to C   op is CCva
        
    //printf("%s",a);
    /*now to get the op in integer */

    //int x;


   // x=strlen(a);                  //  lenth without 0 , so op yuva is 4
   //x= strcmp(a,b);   //compares the char is same or not , (if same gives 0)(if not same , gives 1)

/*ip is yuva and yuva it gies 0                   ▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲         
ip is yuva raaj , it gives 1*/


   // x= strncmp(a,b,1);        //a is yuva , b is yueee na kood 2 CHAR SAME SO ITS 0
   
   
   
   //x= strcmpi(a,b);             //a is yuva , b is YUVA it ignore the case and rpints 0 
    //x=strnicmp(a,b,2);              //same dont care abt the upr/lwr case utpo the char value 
   printf("%s",a); 



}