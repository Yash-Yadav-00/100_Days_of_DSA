// Problem: A secret system stores code names in forward order. To display them in mirror format, you must transform the given code name so that its characters appear in the opposite order.

// Input:
// - Single line: a lowercase string containing only alphabetic characters (no spaces)

// Output:
// - Print the transformed code name after applying the mirror operation

// Example:
// Input:
// hello

// Output:
// olleh

// Explanation: The first character moves to the last position, the second to the second-last, and so on until the entire string is mirrored
#include <stdio.h>
int main()
{
    char str[50]; // Declare Array and VAriables
    int j = 0;
    printf("Enter Your String: \n"); // Take Input From User
    fgets(str, sizeof(str), stdin);

    for (; str[j] != '\0'; j++)
    {
        // Loop for finding the length of string
    }

    for (int i = j - 2; i >= 0; i--) // We will remove \n and \0 from length
    {
        printf("%c", str[i]); // Print each character in reverse
    }
    return 0;
}