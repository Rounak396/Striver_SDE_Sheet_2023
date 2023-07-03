// Kadane's Algorithm

#include <iostream>

using namespace std;

class solution{
    public:

    int maxSubnumsaySum(vector<int> &nums){

        int n = nums.size();
        int max_so_far = nums[0];
        int curr_max = nums[0];

        // process-2
        int n = nums.size();
        int max= INT_MIN, sum=0;
        for(int i=0; i<n; i++){
            sum += nums[i];
            if(sum > max){
                max = sum;
            }
            if(sum < 0){
                sum = 0;
            }
        }
        if (max<0){
            return 0;
        }
        return max;
    }

};

// Time Complexity: O(n)
// Space Complexity: O(1)