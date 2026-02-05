// Arrange Arrival Logs

// Problem: A system receives two separate logs of user arrival times from two different servers. Each log is already sorted in ascending order. Your task is to create a single chronological log that preserves the correct order of arrivals.

// Input:
// - First line: integer p (number of entries in server log 1)
// - Second line: p sorted integers representing arrival times from server 1
// - Third line: integer q (number of entries in server log 2)
// - Fourth line: q sorted integers representing arrival times from server 2)

// Output:
// - Print a single line containing all arrival times in chronological order, separated by spaces

// Example:
// Input:
// 5
// 10 20 30 50 70
// 4
// 15 25 40 60

// Output:
// 10 15 20 25 30 40 50 60 70

// Explanation: Compare the next unprocessed arrival time from both logs and append the earlier one to the final log until all entries are processed
#include <stdio.h>
int main()
{

    int n1, n2;                          // Declare Variables
    printf("Enter no. of Elements: \n"); // Take Input Of First Log
    scanf("%d", &n1);
    int arr1[n1]; // Declare Array
    printf("Enter Elements of Array:\n");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter no. of Elements: \n"); // Take Input of Second Log
    scanf("%d", &n2);
    int arr2[n2]; // Declare Array
    printf("Enter Elements of Array:\n");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int i = 0, j = 0; // Variables for loop

    while (i < n1 && j < n2) // Loop will run until one array doesn't have any elements left
    {
        if (arr1[i] <= arr2[j]) // if the element of arr1 is bigger print it else print the element of arr2
        {
            printf("%d ", arr1[i]);
            i++;
        }
        else
        {
            printf("%d ", arr2[j]);
            j++;
        }
    }

    while (i < n1) // Print the Remaining Elements
    {
        printf("%d ", arr1[i]);
        i++;
    }

    while (j < n2)
    {
        printf("%d ", arr2[j]);
        j++;
    }
    return 0;
}