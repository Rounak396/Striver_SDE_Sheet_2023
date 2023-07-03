// Also return the subarray with maximum sum

#include <iostream>

using namespace std;

class solution{
    public:  

    vector<int> maxSubarraySum(vector<int> &nums){

        // process-2
        int n = nums.size();
        int max= INT_MIN, sum=0;
        int start, ansStart=0, ansEnd=0;
        for(int i=0; i<n; i++){
            if(sum == 0){
                start = i;
            }
            sum += nums[i];
            if(sum > max){
                max = sum;
                ansStart = start;
                ansEnd = i;
            }
            if(sum < 0){
                sum = 0;
            }
        }
        if (max<0){
            return {0};
        }
        return {max, ansStart, ansEnd};
    }
};