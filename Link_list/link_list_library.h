#ifndef _LINK_LIST_LIBRARY_H_
#define _LINK_LIST_LIBRARY_H_

struct ListNode {
    int val;
    struct ListNode *next;
};

int append(struct ListNode **head, int val);
int push(struct ListNode **head, int val);
int insertAfter(struct ListNode *prev_node, int val);
int deleteNode(struct ListNode **head, int val);

#endif
