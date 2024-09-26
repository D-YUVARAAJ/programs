#include<stdio.h>
#include<string.h>

//1st type in note 

struct student1{
    int a;
    char b[66];
    float c;
}variable ;


//2nd type in note

struct student2{
    int x;
    char y[222];
    float z;

};

//3rd type in note 

struct student3{
    int l;
    char m[33];
    float n;
}var;


//4th type with typedef

typedef struct
{
    int i;
    char j[55];
    float k;
} student4;


//6
struct student6{
    int x;
    char y[80];
    float z;

};

void main()
{

    //1st data

    variable.a = 5;
    strcpy(variable.b,"this is for 1st type of struct with variable within struct "); 
    variable.c = 5.555;
     printf("%d\n%s\n%f\n\n",variable.a,variable.b,variable.c);


    //2nd data 

    struct student2 im_giving_vari_here;
    im_giving_vari_here.x = 6;
    strcpy(im_giving_vari_here.y,"this is 2nd one putting it exclusively outside of structure and in void main ");
    im_giving_vari_here.z=6.666;

    printf("%d\n%s\n%f\n\n",im_giving_vari_here.x,im_giving_vari_here.y,im_giving_vari_here.z);

    //3rd odathu 

    //var = {9,"hh",9.99}; it wont work , but putting like var.l =5 works

    printf("type def u already know that ");

    //2nd's in full like array 

    struct student2 thisisstudent6vari ={9,"giving teh data in a singlw line ",9.9999};
    printf("%d\n%s\n%f\n\n",thisisstudent6vari.x,thisisstudent6vari.y,thisisstudent6vari.z);

}