int missingNum(int *arr, int size)
{
    long long n = size + 1; // Total numbers should be from 1 to n (array has n-1 elements)

    long long total_sum = n * (n + 1) / 2; // Sum Of n Elements
    long long arr_sum = 0;                 // Sum of Numbers in Array

    for (int i = 0; i < size; i++)
    { // Calculate the sum of array
        arr_sum += arr[i];
    }

    return (int)(total_sum - arr_sum); // Return the missing number
}