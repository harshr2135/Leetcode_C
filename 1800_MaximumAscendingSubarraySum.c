int maxAscendingSum(int* nums, int numsSize) {
    int large_sum = nums[0], curr_sum = nums[0];
    for (int i = 1; i < numsSize; i++){
        if (nums[i] > nums[i - 1])
            curr_sum += nums[i];
        else
            curr_sum = nums[i];
            
        if (curr_sum > large_sum)
            large_sum = curr_sum;
    }
    return large_sum;
}
