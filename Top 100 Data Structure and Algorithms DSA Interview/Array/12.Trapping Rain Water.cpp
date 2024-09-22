/*Given an array arr[] with non-negative integers representing the height of blocks. If width of each block is 1, 
  compute how much water can be trapped between the blocks during the rainy season. 
Examples:
Input: arr[] = [3,0,0,2,0,4]
Output: 10  */
  public:
    long long trappingWater(vector<int> &arr) {
        int n = arr.size();
        int l = 0; int r = n-1;
        long long ans = 0;
        int left_max = 0, right_max = 0;
        while(l<r){
             if(arr[l]<arr[r]){
                 left_max = max(left_max, arr[l]);
                 ans+=(left_max-arr[l]);
                 l++;
             }
              else{
                 right_max = max(right_max, arr[r]);
                 ans+=(right_max-arr[r]);
                 r--;
             }
        }
        return ans;
    }
};
