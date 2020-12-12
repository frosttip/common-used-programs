#ifndef _LINK_LIST_LIBRARY_H_
#define _LINK_LIST_LIBRARY_H_

struct ListNode {
    int val;
    struct ListNode *next;
};

int append(struct ListNode **head, int val);

#endif
