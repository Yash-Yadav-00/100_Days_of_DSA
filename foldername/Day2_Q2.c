#include <stdio.h>
int maxProfit(int *prices, int pricesSize)
{
    int minprice = prices[0]; //
    int profit = 0;           // Initialize maxprofit as 0

    for (int i = 1; i < pricesSize; i++)
    { // Loop to find the lowest price
        if (prices[i] < minprice)
        {
            minprice = prices[i];
        }
        if (prices[i] - minprice > profit)
        { // Find the Best profit
            profit = prices[i] - minprice;
        }
    }
    return profit; // Return th best profit
}