#include <stdio.h>
int i; //global variable

void inputArray(int a[], int size)
{
    for (i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
}
void printArray(int a[], int size)
{
    for (i=0; i<size; i++)
    {
        printf("\t%d", a[i]);
    }
}
void selection_sort(int a[], int size)
{
    int small_index, temp, j;
    for (i=0; i<size-1; i++)
    {
        small_index = i; // Let i contain the smallest value.
        for (j=i+1; j<size; j++)
        {
            if(a[small_index] > a[j]) // if a[j] contain smaller value
            {
                small_index = j; // replace the smaller value index onto small_index
            }
        } // find the smaller value index from right sub-array if exist. If does not exist, then smaller value index is i.
        temp = a[i]; // swapping the values
        a[i]=a[small_index];
        a[small_index] = temp;
    }
    printArray(a, size);
}
int main()
{
    int a[50], n;

    printf("Enter the size of Array: \t");
    scanf("%d", &n);
    printf("Enter the elements: \t ");
    inputArray(a, n);
    printf("\nUnordered Array: ");
    printArray(a, n);
    printf("\nOrdered Array:\t ");
    selection_sort(a, n);
    return 0;
}
