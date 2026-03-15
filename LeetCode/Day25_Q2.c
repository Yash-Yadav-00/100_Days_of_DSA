/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *detectCycle(struct ListNode *head)
{
    struct ListNode *slow = head;
    struct ListNode *fast = head;

    // Step 1: Detect if cycle exists
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;       // move 1 step
        fast = fast->next->next; // move 2 steps

        if (slow == fast) // cycle detected
        {
            // Step 2: Find start of cycle
            struct ListNode *ptr = head;

            while (ptr != slow)
            {
                ptr = ptr->next;   // move from head
                slow = slow->next; // move from meeting point
            }

            return ptr; // start of cycle
        }
    }

    // If no cycle exists
    return NULL;
}