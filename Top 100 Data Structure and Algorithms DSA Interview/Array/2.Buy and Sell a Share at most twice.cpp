/*In daily share trading, a buyer buys shares in the morning and sells them on the same day.
If the trader is allowed to make at most 2 transactions in a day, the second transaction can 
only start after the first one is complete (buy->sell->buy->sell). The stock prices throughout 
the day are represented in the form of an array of prices. 
Given an array price of size n, find out the maximum profit that a share trader could have
Input:
n = 6
prices[] = {10,22,5,75,65,80}
Output:
87
Explanation:
Trader earns 87 as sum of 12 and 75. Buy at 10, sell at 22, Buy at 5 and sell at 80*/

class Solution
{
    public:
        //User function Template for C++
        
        int maxProfit(vector<int>&price){
            //Write your code here..
            int n = price.size();
            int res = INT_MIN;
            int minprof = price[0];
            vector<int>left(n , 0);
            vector<int>right(n, 0);
            for(int i = 1; i<price.size(); i++){
                res = max(res, price[i] - minprof);
                left[i] = res;
                 minprof = min(minprof, price[i]);
            }
            
            int maxprof = price[n-1];
            int res1 = INT_MIN;
            for(int i = price.size()-2; i>=0; i--){
                
                res1 = max(res1, maxprof-price[i]);
                right[i] = res1;
                maxprof = max(maxprof, price[i]);

            }
            int ans = INT_MIN;
            for(int i = 0; i<n-1; i++){
                ans = max(ans, left[i]+right[i+1]);
            }
            ans = max(ans, right[0]);
            if(ans<=0)return 0;
            return ans;
        }
};

//Leetcode 121. Best Time to Buy and Sell Stock
//on single day buy stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int res = INT_MIN;
        int minprof = prices[0];
        for(int i = 0; i<prices.size(); i++){
            res = max(res, prices[i]-minprof);
            minprof = min(minprof, prices[i]);
        }
        return res;
    }
};
