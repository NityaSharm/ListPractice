/*
Problem Statement: Reverse the elements of the Dynamic Array entered by the user
Example:
array size: 16
Input: [4, 6, 7, 1, 3, 4, 6, 12, 45, 23, 2, 77, 12, 11, 4, 6]

output:
[6, 4, 11, 12, 77, 2, 23, 45, 12, 6, 4, 3, 1, 7, 6, 4]
*/

#include <stdio.h>
#include <stdlib.h>


//Function to reverse the elements of the given Array
void reverseArray(int len, int *arr)
{
    //Take two position variable, one to point at the begining of the array
    // and another to point at the end of the array.
    int i =0, j = len-1;
    for (;i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

}

//Function to display all elements of the Array
void display(int len, int *arr)
{
    for(int i=0; i<len; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int len =0;
    int *arr;
    printf("Enter the total number of elements of Array: ");
    scanf("%d", &len);
    arr = (int *) malloc(len * sizeof(int));
    if(len < 2)
    {
        printf("Please enter atleast two elements for the operation to take place.");
        return 0;
    }
    printf("Enter Array elements: ");
    for(int i=0; i<len; i++)
        scanf("%d", arr+ i);

    printf("Len: %d \n", len);
    display(len, arr);
    printf("\n");

    reverseArray(len, arr);

    display(len, arr);
    printf("\n");

    return 0;
}