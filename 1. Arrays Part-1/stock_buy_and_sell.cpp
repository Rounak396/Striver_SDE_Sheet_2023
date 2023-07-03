// Stock Buy and Sell: best time to buy and sell stock

#include <iostream>

using namespace std;

class solution{
    public:

    int maxProfit(vector<int> &prices){
        int n = prices.size();
        int maxProfit = 0;
        int minPrice = INT_MAX;
        for(int i=0; i<n; i++){
            if(prices[i] < minPrice){
                minPrice = prices[i];
            }
            else if(prices[i] - minPrice > maxProfit){
                maxProfit = prices[i] - minPrice;
            }
        }
        return maxProfit;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)