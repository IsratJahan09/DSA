class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long> v;
        stack<long long>s;
        
        v.push_back(-1);
        for(int i = n-2; i>=0 ; i--){
            if(arr[i] < arr[i+1]){
                v.push_back(arr[i+1]);
                s.push(arr[i+1]);
            }
           else{
               while(!s.empty() and s.top() <= arr[i]){
                   s.pop();
               }
               
               if(!s.empty() and s.top()>arr[i]){
                  v.push_back(s.top());

                   s.push(arr[i]);
               }
               else{
                   v.push_back(-1);
               }
           }
        }
        reverse(v.begin(), v.end());
        return v;

    }
};
