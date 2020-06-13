#include <stdio.h>
int i; //global variable
void inputArrayItems(int a[], int size)
{
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
}

void printArray(int a[], int size)
{
    for(i=0; i<size; i++)
    {
        printf("\t%d", a[i]);
    }
}

void bubbleSort(int a[], int size)
{
    int temp, j;
    for (i=size-1; i>0; i--)
    {
        for(j=0; j<i; j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printArray(a, size);
}
int main()
{
    int a[50], size;
    printf("Enter the size of array:\t");
    scanf("%d", &size);
    inputArrayItems(a, size);
    printf("\nUnordered array:");
    printArray(a, size);
    printf("\nOrdered array:\t");
    bubbleSort(a, size);
    return 0;
}
