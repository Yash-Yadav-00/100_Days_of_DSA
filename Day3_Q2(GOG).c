#include <stdio.h>
int missingNum(int *arr, int size)
{
    int temp; //// Variable to check numbers from 1 to n
    for (temp = 1; temp <= size + 1; temp++)
    {
        int found = 0;

        for (int j = 0; j < size; j++)
        { // Search for temp in the array
            if (arr[j] == temp)
            {
                found = 1;
                break;
            }
        }

        if (found == 0)
        { // If number is not found in array, it is missing
            return temp;
        }
    }
}
