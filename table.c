#include<stdio.h>

int main()
{
  int n, i;
  printf("PLease enter a number: ");
  scanf("%d",&n);

  for (i = 0; i<=100; i++)
  {
    printf("%d x %d = %d\n",n, i, n*i);

  }
 printf("\n");
 return 0;

}
