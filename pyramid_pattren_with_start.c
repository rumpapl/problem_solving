#include <stdio.h>

int main()
{
    int i,j,k,n,count=1;
    printf("Enter the number of rows\t");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        for (j=0; j<n-i; j++)
        {
            printf(" ");
        }
        for(k=0; k<count; k++)
        {
            printf("*");
        }
        printf("\n");
        count = count+2;
    }

    return 0;

}
