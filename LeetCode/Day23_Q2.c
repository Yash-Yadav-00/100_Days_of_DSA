/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *removeElements(struct ListNode *head, int val)
{
    // Step 1: Remove nodes from the beginning if they contain val
    while (head != NULL && head->val == val)
    {
        head = head->next; // move head forward
    }

    // Pointer to traverse the list
    struct ListNode *curr = head;

    // Step 2: Traverse the remaining list
    while (curr != NULL && curr->next != NULL)
    {
        // If next node has the target value
        if (curr->next->val == val)
        {
            // Skip that node
            curr->next = curr->next->next;
        }
        else
        {
            // Move to next node
            curr = curr->next;
        }
    }

    // Return the updated head
    return head;
}