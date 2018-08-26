#include<stdio.h>

int main()
{
    int number, left , inverse = 0;

    printf("Please enter a number: ");
    scanf("%i", &number);

    while(number > 0)
    {
        left = number % 10;
        number /= 10;
        inverse = inverse * 10 + left;

    }
    if(nmuber == inverse)
    {
        printf("This is a palindrome number!!!!");
        }
        
        else,
        {
            printf("This is not a palindrome number!");
            }
 printf("\n");
 

 return 0;


}