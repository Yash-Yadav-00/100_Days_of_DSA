int fib(int n)
{
    if (n < 2) // if number is less than 2
        return n;

    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++)
    {
        c = a + b; // update the sum
        a = b;     // store the last second digit
        b = c;     // store the last digit(ie.the sumed value)
    }
    return b;
}
