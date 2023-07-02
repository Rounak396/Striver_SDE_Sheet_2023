// majority element of the first type means the element which occurs more than n/2 times in the array

#include <iostream>

using namespace std;

class solution {
    public:

    int majorityElement(vector<int> &nums){
        //scan the array: brute force approach

        for (int i=0; i<nums.size(); i++){
            int count=0;
            for (int j=0; j<nums.size(); j++){
                if (nums[i]==nums[j])
                    count++;
            }
            if (count>nums.size()/2)
                return nums[i];
        }
        return -1; // added this line to return a value in case no majority element is found
    }
};

// This process involves the concept of nested loops. The time complexity of this approach is O(n^2).
// S[ace Complexity: O(1).