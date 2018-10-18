
#include <stdio.h>

int main()
{
    long n, remainder, base = 1, binary = 0;

    printf("Enter a decimal integer \n");
    scanf("%ld", &n);



    while (n > 0)
    {
        remainder = n % 2;


        binary = binary + remainder * base;
        n = n / 2;
        base = base * 10;
    }
    printf("Its binary equivalent is = %ld\n", binary);

}
