#include <stdio.h>

int main()
{
    int s1, s2, s3, s4, s5, sum, total =500;
    float per;
    
    printf("Marks in subject 1: ");
    scanf("%d", &s1);
    
    printf("Marks in subject 2: ");
    scanf("%d", &s2);
    
    printf("Marks in subject 3: ");
    scanf("%d", &s3);
    
    printf("Marks in subject 4: ");
    scanf("%d", &s4);
    
    printf("Marks in subject 5: ");
    scanf("%d", &s5);
    
    sum = s1 + s2 + s3 + s4 + s5;
    
    per = (sum*100)/ total;
    printf("Percentage: %f", per);
    
    printf("\n");
    return 0;
    
    }
