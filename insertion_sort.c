#include <stdio.h>
int i;
void printArray(int a[], int size)
{
    for (i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
}

void inputArray(int a[], int size)
{
    for (i = 0; i < size; i++)
    {
        printf("\n i: %d\t", i);
        scanf("%d",&a[i]);
    }
}

void insertionSort(int a[], int size)
{
    int temp, j;
    for(i=1; i<size; i++)
    {
        temp = a[i];
        for(j=i-1; j>=0 && temp< a[j]; j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=temp;
    }
    printArray(a, size);
}

int main()
{
    int n, a[50];

    printf("Enter the size of unordered list: \t");
    scanf("%d",&n);
    printf("value of n %d: \n", n);
    printf("Enter the unordered list: \t");
    inputArray(a, n);
    printf("The unordered list: \t");
    printArray(a, n);
    printf("The ordered list: \t");
    insertionSort(a, n);

    return 0;
}
