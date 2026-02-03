// Linear Search with Comparison Count

// Problem: Implement linear search to find key k in an array. Count and display the number of comparisons performed.

// Input:
// - First line: integer n (array size)
// - Second line: n space-separated integers
// - Third line: integer k (key to search)

// Output:
// - Line 1: "Found at index i" OR "Not Found"
// Line 2: "Comparisons = c"

// Example:
// Input:
// 5
// 10 20 30 40 50
// 30

// Output:
// Found at index 2
// Comparisons = 3

// Explanation: Compared with 10, 20, 30 (found at index 2 with 3 comparisons)
#include <stdio.h>
int main()
{
    int n, num, comp = 0, found;
    printf("Enter no. of Elements: \n"); // Take Input From User
    scanf("%d", &n);
    int arr[n]; // Declare Array
    printf("Enter Elements of Array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search:\n");
    scanf("%d", &num);

    // Linear Search
    for (int i = 0; i < n; i++)
    {
        comp++; // count comparison
        if (arr[i] == num)
        {
            printf("Element found at Index: %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found) // If Element is not found
    {
        printf("Element not found\n");
    }

    printf("Total comparisons: %d\n", comp);
    return 0;
}