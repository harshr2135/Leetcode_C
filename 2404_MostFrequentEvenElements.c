int mostFrequentEven(int* nums, int numsSize) {
    int freq[100001] ={0};
    int maxFreq = 0, res = -1;

    for(int i = 0; i<numsSize; i++){
        if(nums[i]%2==0)
            freq[nums[i]]++;
    }

    for(int i = 0; i<100001; i++){
        if(freq[i]>0 && freq[i] > maxFreq){
            maxFreq = freq[i];
            res = i;
        }
        else if(freq[i]>0 && freq[i] == maxFreq){
            if(i<res)
                res = i;
        }
            
    }

    return res;
}