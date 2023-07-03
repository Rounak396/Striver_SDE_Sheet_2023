// Sorting an array consisting of only 0s, 1s and 2s

// Brute force approach

#include <iostream>

using namespace std;

class solution{
    public:

    void sortArray(vector<int> &nums){
        int n;
        cin>>n;

        sort (nums.begin(), nums.end());

        for (int i=0; i<n; i++){
            cout<<nums[i]<<" ";
        }
        
    }
};