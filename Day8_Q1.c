// Problem: Given integers a and b, compute a^b using recursion without using pow() function.

// Input:
// - Two space-separated integers a and b

// Output:
// - Print a raised to power b

// Example:
// Input:
// 2 5

// Output:
// 32

// Explanation: 2^5 = 2 * 2 * 2 * 2 * 2 = 32
#include <stdio.h>
int power(int x, int y)
{
    if (y == 0)
    {
        return 1; // Base Case x^0=1
    }
    if (y == 1)
    {
        return x; // x^1=x
    }
    return x * power(x, y - 1); // x^y(keep multiplying x until base case is reached)
}
int main()
{

    int a, b;                        // Declare Variables
    printf("Enter Your Number: \n"); // Take Input From User
    scanf("%d", &a);
    printf("Enter Your Power: \n");
    scanf("%d", &b);
    printf("%d ^ %d = %d\n", a, b, power(a, b)); // Calculate Power Using Recursion

    return 0;
}