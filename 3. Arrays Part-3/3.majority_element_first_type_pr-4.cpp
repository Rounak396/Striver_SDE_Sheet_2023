// By Boyre- Moore Voting Algorithm

#include <iostream>
#include <vector>

using namespace std;

class solution{
    public: 

    int majorityElement(vector<int> &nums){
        
        int el;
        int count = 0;

        for (int i=0; i<nums.size(); i++){
            if (count==0){
                count = 1;
                el= nums[i];
            }
            if (nums[i]==el) count++;
            else count--;
        }

        int count1=0;
        for (int i=0; i<nums.size(); i++){
            if (nums[i]==el) count1++;
        }

        if (count1>nums.size()/2) return el;
        else return -1;
    }

};

// Time Complexity: O(n), single pass
// Space Complexity: O(1), no extra space used.