#include<stdio.h>

int main(void)
{
    int number;

    printf("Enter a number please: ");
    scanf("%d", &number);

    if(number % 2 == 0)
    {
        printf("%d is even number", number);
    }

    else
    {
        printf("The number is odd");
    }
    printf("\n");
    return 0;
}