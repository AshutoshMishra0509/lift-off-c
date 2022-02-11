/* write a c program to check whether a number is even or odd using switch case */

#include <stdio.h>

int main()
{
    int num;

    
    printf("Enter any number: ");
    scanf("%d", &num);

    switch(num % 2)
    {

        case 0: 
            printf("Number is Even");
            break;

        
        case 1: 
            printf("Number is Odd");
            break;
    }

    return 0;
}