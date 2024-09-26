#include<stdio.h>
void main()
{
    printf("ihtu constant check pannarathukaaga  \na=5 b=10 \n");
    int a=5;
    const int b=10;

    //im vhanging a=5 to 50
    a=50;
    //b=100;
    printf("NOW \n a=%d b=%d here a value is changed .remove the comments and try changing constant value b , it will give error  ",a,b);
}