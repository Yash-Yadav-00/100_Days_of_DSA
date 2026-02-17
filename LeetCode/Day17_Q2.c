int maxSubArray(int *nums, int numsSize)
{

    int currentSum = nums[0];
    int maxSum = nums[0];

    for (int i = 1; i < numsSize; i++)
    {

        // Decide whether to start fresh or continue
        if (currentSum + nums[i] < nums[i])
            currentSum = nums[i];
        else
            currentSum = currentSum + nums[i];

        // Update maximum
        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    return maxSum;
}
