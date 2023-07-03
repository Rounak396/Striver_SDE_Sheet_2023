// Kadane's Algorithm

#include <iostream>

using namespace std;

class solution{
    public:

    int maxSubnumsaySum(vector<int> &nums){

        int n = nums.size();
        int max_so_far = nums[0];
        int curr_max = nums[0];

        for(int i=1; i<n; i++){
            curr_max = max(nums[i], curr_max+nums[i]);
            max_so_far = max(max_so_far, curr_max);
        }
        return max_so_far;
    }

};

// Time Complexity: O(n)
// Space Complexity: O(1)