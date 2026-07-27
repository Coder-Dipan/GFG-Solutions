/* Structure of Binary Tree Node
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    Node *build(vector<int> &pre, vector<int> &preMirror, 
    int preSt, int preEnd, int mirrorSt, int mirrorEnd){
        if(preSt > preEnd) return NULL;
        
        Node* root = new Node(pre[preSt]);
        
        if(preSt == preEnd) return root;
        
        int left = pre[preSt + 1];
        
        int idx = mirrorSt;
        
        while(preMirror[idx] != left) {
            idx++;
        }
        
        int sz = mirrorEnd - idx + 1;
        
        root->left = build(pre, preMirror, preSt + 1, preSt + sz, 
                            idx, mirrorEnd);
                            
        root->right = build(pre, preMirror, preSt + sz + 1, preEnd,
                            mirrorSt + 1, idx - 1);
                            
        
        return root;
        
    }
  
    Node *constructBinaryTree(vector<int> &pre, vector<int> &preMirror) {
        // code here
        int n = pre.size();
        
        return build(pre, preMirror, 0, n-1, 0, n-1);
        
    }
};