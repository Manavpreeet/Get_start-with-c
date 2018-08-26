#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int a;
    printf("Enter your age: ");
    scanf("%d", &a);


    if (a >= 18)
    {
        char d = get_char("Do you have voter id card: (Y/N)\n");

        if( d == 'y' || d == 'Y')
        {
            char f = get_char("Do you belong to minority: (Y/N)\n");

            if( f == 'y' || f == 'Y')
            {
                printf("Welcome, you  are eligible to vote");
            }
            else
            {
                printf("Sorry, you are not  eligible to vote");
            }
        }
        else
        {
             printf("Sorry, you are not  eligible to vote");
        }
    }
    else
    {
       printf("Sorry, you are not  eligible to vote");
    }
printf("\n");

}
