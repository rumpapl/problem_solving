#include <stdio.h>
int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}

int main()
{
    int n, i, j, k;
    printf("Enter the value: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
       // printf("pass: %d\n", i);
       for(k=1; k<n-i; k++){
        printf(" ");
       }
        for(j=0; j<=i;j++)
        {
            //printf("j=%d: value=%d\n", j,factorial(i)/(factorial(j)*factorial(i-j)));
            printf(" %d", factorial(i)/(factorial(j)*factorial(i-j)));
        }
        printf("\n");
    }

    return 0;
}
