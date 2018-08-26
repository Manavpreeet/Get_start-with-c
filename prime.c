#include<stdio.h>

int main(void)
{

  int n;

  printf("Enter number: ");
  scanf("%d", &n);

  int a = 0;
  int i = 2;
  for(i = 2; i < n/2; i++  )
  {
    if(n % i == 0)
    {
      a++;
      break;
    }
  }
  if (a == 1)
    {
        printf("%d is not a  prime number\n", n);

    }
    else
    {
        printf("%d is  a  prime number\n", n);


    }

}