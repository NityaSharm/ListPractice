#include <stdio.h>
#include <stdlib.h>

//Struct for the Node contains Value and a pointer to structure of itself.
struct Node {
    int value;
    struct Node *Next;
};

//global head pointer.
struct Node *head = NULL;

/*unction to create a linked list, it takes two parameters,
1. Array of elements to form a list.
2. number of elements to be added in the list.
*/
void createList(int A[], int num)
{
    struct Node *temp=NULL;
    struct Node *p=NULL;
    int  count = 1;
    if(head ==NULL)
    {
        temp = (struct Node*) malloc (sizeof(struct Node));
        temp->value = A[0];
        temp->Next = NULL;
        p = head = temp;
    }
    while(count < num)
    {
        printf("Value: %d Count:%d \n", A[count], count);
        temp = (struct Node*) malloc(sizeof(struct Node));
        temp->value = A[count];
        temp->Next = NULL;
        p->Next = temp;
        p = p->Next;
        count++;
    }
}

//This function is used to traverse the list.
void traverseList()
{
    struct Node *p=NULL;
    p=head;
    while(p != NULL)
    {
        printf("%d \t", p->value);
        p=p->Next;
    }

}

// main function 
int main()
{
    int A[] = {5, 10, 15, 20, 25, 30, 35, 40};
    int nodeNum = 8;
    createList(A, nodeNum);
    traverseList(head);
    return 0;
}