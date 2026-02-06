// Problem: Given a sorted array of n integers, remove duplicates in-place. Print only unique elements in order.

// Input:
// - First line: integer n
// - Second line: n space-separated integers (sorted array)

// Output:
// - Print unique elements only, space-separated

// Example:
// Input:
// 6
// 1 1 2 2 3 3

// Output:
// 1 2 3

// Explanation: Keep first occurrence of each element: 1, 2, 3
#include <stdio.h>
int main()
{

    int n;                               // Declare Variables
    printf("Enter no. of Elements: \n"); // Take Input From User
    scanf("%d", &n);
    int arr[n]; // Declare Array
    printf("Enter Elements of Array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int temp = arr[0];
    printf("%d ", temp); // print first element

    // Loop through remaining elements
    for (int i = 1; i < n; i++)
    {
        // If current element is different from last printed element
        if (arr[i] != temp)
        {
            temp = arr[i];       // Update last unique element
            printf("%d ", temp); // Print unique element
        }
    }

    return 0;
}