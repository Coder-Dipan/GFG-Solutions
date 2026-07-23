class Solution {
  public:
    bool canRepresentBST(vector<int> &arr) {
        // code here
        stack<int> s;
        int limit = INT_MIN;
        
        for(int i : arr){
            if(i < limit) return false;
            
            while(!s.empty() && i > s.top()){
                limit = s.top();
                s.pop();
            }
            
            s.push(i);
        }
        
        return true;
    }
};