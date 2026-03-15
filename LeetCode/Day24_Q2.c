/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

bool hasCycle(struct ListNode *head)
{
    // If the list is empty or contains only one node
    // then it cannot have a cycle
    if (head == NULL || head->next == NULL)
        return false;

    // Initialize two pointers
    // slow moves 1 step at a time
    // fast moves 2 steps at a time
    struct ListNode *slow = head;
    struct ListNode *fast = head;

    // Traverse the linked list
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;       // move slow pointer by 1 node
        fast = fast->next->next; // move fast pointer by 2 nodes

        // If slow and fast meet, there is a cycle
        if (slow == fast)
            return true;
    }

    // If fast pointer reaches NULL
    // then there is no cycle in the list
    return false;
}