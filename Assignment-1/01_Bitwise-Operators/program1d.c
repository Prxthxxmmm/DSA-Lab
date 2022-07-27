//To check whether entered number is Even or Odd
//Using bitWise Shift Operator

#include <stdio.h>

int main()
{
    int n;
    printf("\nEnter any number: ");
    scanf("%d", &n);

    if((n >> 1) << 1 == n)
        printf("%d is even", n);
        else
        printf("%d is odd", n);
    return 0;
}