// Reverse an Array In-Place

// Problem: Given an array of n integers, reverse the array in-place using two-pointer approach.

// Input:
// - First line: integer n
// - Second line: n space-separated integers

// Output:
// - Print the reversed array, space-separated

// Example:
// Input:
// 5
// 1 2 3 4 5

// Output:
// 5 4 3 2 1

// Explanation: Swap pairs from both ends: (1,5), (2,4), middle 3 stays
#include <stdio.h>
int main()
{
    int n, temp;                         // Declare Variables
    printf("Enter no. of Elements: \n"); // Take Input From User
    scanf("%d", &n);
    int arr[n]; // Declare Array
    printf("Enter Elements of Array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        temp = arr[i]; // temp variable used to change elements in pair of 2
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]); // Display Output
    }

    return 0;
}