#include <stdio.h>
int main()
{
    int n, i, a[1000];
    printf("Enter the nth value:\t");
    scanf("%d", &n);
    if(n<0)
        printf("Number should be positive.");
    else
    {
        if(n==0)
            a[0]=0;
        else if(n==1)
            a[1]=1;
        else
        {
            a[0]=0;
            a[1]=1;
            for(i=2; i<n; i++)
            {
                a[i] = a[i-1] + a[i-2];
            }
        }

        printf("Fibonacce series:\t");
        for(i=0; i<n; i++)
        {
            printf("%d\t", a[i]);
        }
    }
    return 0;
}
