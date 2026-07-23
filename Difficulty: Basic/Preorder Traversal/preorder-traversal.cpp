/*
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    void preOrder_fun(vector<int>& preOrderArr, Node* root){
        if(root == NULL) return;
        
        preOrderArr.push_back(root->data);
        preOrder_fun(preOrderArr, root->left);
        preOrder_fun(preOrderArr, root->right);
        
    }
    
    vector<int> preOrder(Node* root) {
        // code here
        vector<int> preOrderArr;
        preOrder_fun(preOrderArr, root);
        
        return preOrderArr;
    }
};