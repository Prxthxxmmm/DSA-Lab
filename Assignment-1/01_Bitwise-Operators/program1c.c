//To check whether entered number is Even or Odd
//Using bitWise XOR Operator

#include <stdio.h>
int main()
{
    int n;
    printf("\nEnter any number:");
    scanf("%d", &n);

    if((n ^ 1) == n-1)
    {
        printf("%d is odd", n);
    }
    else
    {
        printf("%d is even", n);
    }
    return 0;
}