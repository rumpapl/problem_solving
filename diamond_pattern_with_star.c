#include <stdio.h>

int main()
{
    int n,hf,i,j,k,count=1;

    printf("Enter the number of rows(input should be odd number):\t");
    scanf("%d", &n);
    hf=(n/2);
    for (i=1; i<=hf+1; i++)
    {
        for(j=0; j<hf+1-i; j++)
        {
            printf(" ");
        }
        for(k=1; k<=count; k++)
        {
            printf("*");
        }
        count+=2;
        printf("\n");
    }
    count -= 4;
    for (i=1; i<=hf; i++)
    {
        for(j=i-1; j>=0; j--)
        {
            printf(" ");
        }
        for(k=1; k<=count; k++)
        {
            printf("*");
        }
        count-=2;
        printf("\n");
    }

    return 0;
}
