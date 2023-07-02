// Sorting and then finding the majority element

#include <iostream>
#include <vector>
#include <map>

using namespace std;

class solution{
    public:

    int majorityElements(vector<int> &nums){
        sort (nums.begin(), nums.end());

        int count = 1;

        for (int i=1; i<nums.size(); i++){
            if(nums[i]==nums[i-1]) count++;
            else count = 1;

            if (count>nums.size()/2) return nums[i];
        }
        return -1;
    }
};