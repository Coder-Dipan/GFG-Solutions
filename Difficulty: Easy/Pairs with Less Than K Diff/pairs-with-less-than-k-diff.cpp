class Solution {
  public:
    int countPairs(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        sort(arr.begin(), arr.end());
        
        int i = 0;
        int j = i + 1;
        
        int ans = 0;
        while(j < n){
            while(j < n && abs(arr[j] - arr[i]) < k){
                int remaining = j-i-1;
                ans += 1 + remaining;
                j++;
            }
            
            i++;
        }
        
        return ans;
    }
};