class Solution {
  public:
    vector<vector<int>> levelSort(vector<int>& arr) {
        // code here
        vector<vector<int>> ans;
        
        int n = arr.size();
        int index = 0;
        int levelSize = 1;
        
        while(index < n){
            vector<int> curr;
            
            for(int i = 0; i < levelSize && index < n; i++){
                curr.push_back(arr[index]);
                index++;
            }
            
            sort(curr.begin(), curr.end());
            
            ans.push_back(curr);
            
            levelSize *= 2;
        }
        
        return ans;
    }
};
