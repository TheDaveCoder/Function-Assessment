#include <stdio.h>

int findLargestEl(int arr[], int);

int main()
{
    int arraySize, largestEl;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &arraySize);
    int arr[arraySize];
    printf("Input %d elements in the array: \n", arraySize);
    for (int i = 0; i < arraySize; i++)
    {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }
    largestEl = findLargestEl(arr, arraySize);
    printf("The largest element in the array is: %d", largestEl);
}

int findLargestEl(int arr[], int arrSize)
{
    int currHighestVal = 0;
    for (int i = 0; i < arrSize; i++)
    {
        currHighestVal = currHighestVal > arr[i] ? currHighestVal : arr[i];
    }
    return currHighestVal;
}