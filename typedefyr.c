/*
#include<stdio.h>

typedef struct{
    int rollno;
    int pageno;         //typedef datatype nickname

}nicknameithu;

void main()
{
    nicknameithu peru1 ={3,4};

    printf("%d\n%d",peru1.pageno,peru1.rollno);



}*/

#include<stdio.h>

//see this to clearly know about the typedef


void main()
{
        typedef char use_for_all_string_vaanga[50];

        use_for_all_string_vaanga greeting = "vanako thala";
        use_for_all_string_vaanga name ="yuvaraaj";

        printf("%s",greeting);
}