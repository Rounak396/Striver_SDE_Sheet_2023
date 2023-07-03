// better solution: counting number of zeros, ones and twos and then replacing the array with the count of zeros, ones and twos.

#include <iostream>

using namespace std;

class solution{
    public:

    void sortArray(vector<int> &nums){
        int n= nums.size();

        int count0=0, count1=0, count2=0;

        for (int i=0; i<n; i++){
            if (nums[i]==0) count0++;
            else if (nums[i]==1) count1++;
            else count2++;
        }

        for (int i=0; i<count0; i++){
            nums[i]=0;
        }   

        for (int i=count0; i<count0+count1; i++){
            nums[i]=1;
        }    

        for (int i=count0+count1; i<n; i++){
            nums[i]=2;
        }
    }
};

// Time Complexity: O(2*n) ≈ O(n)
// Space Complexity: O(1), no extra space used.
