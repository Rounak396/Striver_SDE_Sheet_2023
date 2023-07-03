// BRUTE FORCE APPROACH

#include <iostream>

using namespace std;

class solution{
    public:  

    int maxSubarraySum(vector<int> &nums){
        int n= nums.size();
        int maxSum= INT_MIN;

        for (int i=0; i<n; i++){
            for (int j=i; j<n; j++){
                int sumOfSubarray=0;
                for (int k=i; k<=j; k++){
                    sumOfSubarray+= nums[k];
                }
                maxSum= max(maxSum, sumOfSubarray);
            }
        }

        return maxSum;
    }
};

// Time Complexity: O(n^3)
// Space Complexity: O(1), as no extra space is used.