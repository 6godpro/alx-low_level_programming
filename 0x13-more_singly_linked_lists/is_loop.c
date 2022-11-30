#include <stdio.h>
#include "lists.h"

int is_loop(listint_t *head)
{
    listint_t *slow, *fast;
    int node = 0;

    if (!head || !head->next)
        return 0;
    slow = head;
    fast = head;
    
    while (slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            slow = head;
            while(slow != fast)
            {
                node++;
                slow = slow->next;
                fast = fast->next;
            }
            return ++node;
        }
    }
    return 0;
}
