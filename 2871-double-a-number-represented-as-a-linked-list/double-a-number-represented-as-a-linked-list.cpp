class Solution {
public:
    int sol(ListNode* prev, ListNode* curr){
        if(curr == NULL)return 0;
        int pos = 2*(curr->val) + sol(curr, curr->next);
        curr->val = pos%10 ;
        if(pos/10) return pos/10;
        return 0;
        
    }
    ListNode* doubleIt(ListNode* head) {
        if(head == NULL) return head;
        ListNode* prev = NULL;
        ListNode* curr = head;
        int t = sol(prev, curr);
       if(t != 0) {
           ListNode* temp = new ListNode(t);
           temp->next = head;
           head = temp;
       };
       return head; 
    }
};