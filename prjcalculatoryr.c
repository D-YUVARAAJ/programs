
/*Your C code contains a logical error involving input handling, which leads to unexpected behavior when reading the character variable. Let's go through your code and identify the problems, then correct them.
Problem in the Code:
1. Handling of scanf for character:

The line scanf("%c",&character); reads the next character, which could be a newline (\n) left in the buffer from the previous scanf or printf. The subsequent getchar(); attempts to consume this leftover newline. This causes confusion in reading the user's intended input.
2. Infinite Loop when character is newline:

If the buffer contains a newline before entering the loop (e.g., after pressing Enter after a number), scanf("%c", &character); will read this newline. Then the loop continues without proper user interaction because the character is not checked correctly.
3. Unnecessary use of getchar():

The getchar(); after scanf("%c", &character); doesn't work as intended. It might consume an extra character that could be part of the input, especially if used repeatedly without conditions.*/


#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
void main()
{
    char character;
    float a,b;
    bool flag = true;

    while (flag == true)
    {
        printf("\nwelcome to the calculator program\n select ur operation (+|-|/|*) press x to cancel the operation  ");
        scanf(" %c",&character);  //here i put the space vittu %c is bcoz last scanf oda whitepace a athu eduthutu then %c ku en value va potuku , if not it would take teh buffer %n as ip and exit 
        
    if(character =='x' || character =='X')
    {
        printf("thanks for using the calci");
        flag = false;
    }

        else
        {
            printf("\nenter ur 1st value :");
            scanf("%f",&a);

            printf("\nenter ur 2nd value :");
            scanf("%f",&b);

            


            switch(character)
            {
                case '+':
                printf("%4.1f %c %4.1f = %4.1f",a,character,b,(a+b));
                break;

                
                case '-':
                printf("%4.1f %c %4.1f = %4.1f",a,character,b,(a-b));
                break;

                
                case '*':
                printf("%4.1f %c %4.1f = %4.1f",a,character,b,(a*b));
                break;

                
                case '/':
                printf("%4.1f %c %4.1f = %4.1f",a,character,b,(a/b));
                break;

                default:
                printf("u invented new operation !!!! but no one knows what to do ");
                break;

            }
        }
    }


}

    