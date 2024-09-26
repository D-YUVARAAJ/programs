/*see about getchar in the notebook*/


#include<stdio.h>
void main()
{
    printf("letzz print the output by getting the input \n");


    int namber;
    printf("enter the age to print (number) :");
    scanf("%d",&namber);                    
            
    double cgpa;
    printf("enter ur cgpa(double):");
    scanf("%lf",&cgpa);
    getchar();

    char initial;   
    printf("enter ur initial(char):");          //buffer is there and the char is not ignoring the buffer 
    scanf("%c",&initial);

    char name[30];
    printf("enter ur name(string with no space):");
    scanf("%s",name);
    getchar();

    char street[50];
    printf("enter ur street name (strings with space inbetween that is until a new line ):\n\n");
    fgets(street,50,stdin);

    char a=2;
    printf("THANKS FOR UR VALUABLE FEEDBACK , WE ARE PROCESSING , KINDLY WAIT... %c %c\n\n",a);


    printf("hello MR. %c.%s . Since ur cgpa is %lf we have sent the job confirmation letter to ur address %s. according to ur age %d u willl be considered as a fresher and allocated in newbie job with high package of 8lpa...",initial,name,cgpa,street,namber);



}
