#include <stdio.h>

int main()
{
    int i,j,k,n,value=1;

    printf("Enter the number of rows:\t");
    scanf("%d", &n);

    for( i=1; i<=n; i++)
    {
        value = i;
        for(j=1; j<=n-i; j++){
            printf(" ");
        }

        for (k=1; k<=i; k++)
        {
            printf("%d",value);
            value++;
        }
        value-=2;
        for (k=1; k<i; k++){
            printf("%d",value);
            value--;
        }
        printf("\n");

    }

    return 0;
}
