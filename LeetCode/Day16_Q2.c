void rotate(int *nums, int numsSize, int k)
{

    if (numsSize == 0)
        return;

    k = k % numsSize; // handle k > numsSize

    int temp;

    for (int i = 0; i < k; i++)
    {

        temp = nums[numsSize - 1]; // store last element

        // shift all elements to the right
        for (int j = numsSize - 1; j > 0; j--)
        {
            nums[j] = nums[j - 1];
        }

        nums[0] = temp; // put last element at front
    }
}
