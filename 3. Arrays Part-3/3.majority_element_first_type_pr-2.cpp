// We have to keep track of the number of ocurrences of the element, hence we can use hashmap.

#include <iostream>
#include <vector>
#include <map>

using namespace std;

class solution {
    public:

    int majorityElement(vector<int> &nums){
        map<int, int> mpp;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]++];
        }

        for (auto it: mpp){
            if (it.second> nums.size()/2){
                return it.first;
            }
        }
        return -1;
    }
};

// Time Complexity: O(nlogn), due to the use of map. Time complexity of map is O(logn) for insertion and search.
// Extra Space used for map for n elements. Space Complexity: O(n).