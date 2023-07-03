//  Better Approach: using two for loops

#include <iostream>

using namespace std;

class solution{
    public:

    int maxSubarraySum(vector<int> &nums){
        int n= nums.size();
        int maxSum= INT_MIN;

        // if all elements are negative, return the maximum element
        if(*max_element(nums.begin() , nums.end())<0){
            
            return *max_element(nums.begin() , nums.end()) ;
        }

        for (int i=0; i<n; i++){
            int sumOfSubarray=0;
            for (int j=i; j<n; j++){
                sumOfSubarray+= nums[j];
                maxSum= max(maxSum, sumOfSubarray);
            }
        }
        return maxSum;
    }
};

// Time Complexity: O(n^2)
// Space Complexity: O(1), as no extra space is used.