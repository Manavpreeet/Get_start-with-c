+#include<stdio.h>

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
 printf("%d", inverse);
 printf("\n");

 return 0;


}