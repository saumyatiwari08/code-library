include <stdio.h>
#include <stdlib.h>
 
struct Node
{
    int data;
    struct Node *next;
};
 
void push(struct Node** headRef, int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
 
    newNode->data = data;
    newNode->next = *headRef;
    *headRef = newNode;
}
 
 void printList(char *msg, struct Node *node)
{
    printf("%s: ", msg);
    while (node)
    {
        printf("%d —> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}
 
void rearrange(struct Node **headRef)
{
    if (*headRef == NULL || (*headRef)->next == NULL) {
        return;
    }
 
    struct Node* curr = *headRef, *prev = NULL;
 
    while (curr != NULL && curr->next != NULL)
    {
        struct Node* temp = curr->next;
        curr->next = temp->next;
        temp->next = curr;
 
        if (prev == NULL) {
            *headRef = temp;
        }
        else {
            prev->next = temp;
        }
 
        prev = curr;
        curr = curr->next;
    }
}
 
int main(void)
{
    int a[] = {3, 4, 3, 4, 5, 7, 7, 9};
    unsigned n = sizeof(a)/sizeof(a[0]);
    struct Node* head = NULL;
    for (int i = n - 1; i >= 0; i--) {
        push(&head, a[i]);
    }
    printList("Before", head);
    rearrange(&head);
    printList("After ", head);
    return 0;
}