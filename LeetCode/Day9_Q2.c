void reverseString(char *s, int sSize)
{
    char temp; // Temporary variable to store character during swapping
    int j = 0; // Left pointer starting from the beginning of the string

    for (int i = sSize - 1; j < i; i--, j++)
    {
        // Swap first and last variable using temp variable
        temp = s[j];
        s[j] = s[i];
        s[i] = temp;
    }
}
