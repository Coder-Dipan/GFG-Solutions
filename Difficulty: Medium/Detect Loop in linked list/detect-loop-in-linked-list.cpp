/*
class Node {
   public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
} */

class Solution {
  public:
    bool detectLoop(Node* head) {
        // code here
        Node* slow = head;
        Node* fast = head;
        
        while(fast != NULL && fast->next != NULL){
            slow = slow->next; //moves 1 step
            fast = fast->next->next; //moves 2 step
            
            if(slow == fast) {
                return true;
            }
        }
        
        return false;
    
    }
};