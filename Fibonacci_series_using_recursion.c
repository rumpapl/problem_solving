#include <stdio.h>
int count=0;
int febo(int n)
{
    count++;

    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return febo(n-1) + febo(n-2);
}

int main()
{
    int n, i;
    printf("Enter the nth value:\t");
    scanf("%d", &n);
    if(n<0)
        printf("Number should be positive.");
    else
    {
        printf("Fibonacce series:\t");
        for(i=0; i<n; i++)
        {
            printf("%d\t", febo(i));
        }
    }

    printf("\nCount:\t%d", count);
    return 0;
}
