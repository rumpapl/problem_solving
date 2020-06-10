#include <stdio.h>
int fact(int n)
{
    if ( n<1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int find_nCr(int n, int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
int find_nPr(int n, int r)
{
    return fact(n)/fact(n-r);
}

int main()
{
    int n, r;
    printf("Enter the value of n and r: \t");
    scanf("%d %d", &n, &r);
    printf("Value of %dC%d: %d\n", n,r,find_nCr(n, r));
    printf("Value of %dP%d: %d\n", n,r,find_nPr(n, r));
}
