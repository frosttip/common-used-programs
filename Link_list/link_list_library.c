#include <stdio.h>//For bool
#include <stdbool.h>//For true/false
#include <stdlib.h>//for malloc
#include <string.h>//for memset
#include "link_list_library.h"

int append(struct ListNode **head, int val)
{
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    if(newNode == NULL)
    {
        printf("Memory alloc fail.\r\n");
        return false;
    }

    newNode->val = val;
    newNode->next = NULL;

    if(*head==NULL)
    {
        *head = newNode;
    }
    else
    {
        struct ListNode* current = *head;
        while (true) 
        {
            if(current->next == NULL)
            {
                current->next = newNode;
                break;
            }
            current = current->next;
        };
    }

    return true;
}

int push(struct ListNode **head, int val)
{
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    if(newNode == NULL)
    {
        printf("Memory alloc fail.\r\n");
        return false;
    }

    newNode->val = val;
    newNode->next = NULL;

    if(*head==NULL)
    {
        *head = newNode;
    }
    else
    {
        newNode->next = *head;
        *head = newNode;
    }

    return true;
}

int insertAfter(struct ListNode *prev_node, int val)
{
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    if(newNode == NULL)
    {
        printf("Memory alloc fail.\r\n");
        return false;
    }

    newNode->val = val;
    newNode->next = NULL;

    if(prev_node==NULL)
    {
        prev_node = newNode;
    }
    else
    {
        newNode->next = prev_node->next;
        prev_node->next = newNode;
    }

    return true;
}
