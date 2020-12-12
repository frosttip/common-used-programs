#include <stdio.h>//For bool
#include <stdlib.h>//for malloc
#include <string.h>//for memset
#include "link_list_library.h"

int append(struct ListNode **head, int val)
{
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));

    newNode->val = val;
    newNode->next = NULL;

    if( *head==NULL)
    {
        *head = newNode;
        printf("added at beginning\n");
    }
    else
    {
        struct ListNode* current = *head;
        while (true) 
        {
            if(current->next == NULL)
            {
                current->next = newNode;
                printf("added later\n");
                break;
            }
            current = current->next;
        };
    }

    return 1;
}

int main(int argc, char* argv[])
{
    struct ListNode* head = NULL;
    struct ListNode* tmp = NULL;

    bool ret = false;

    append(&head, 1);

    append(&head, 2);

    system("pause");

    return 0;
}
