class Solution {
public:
// void Pairs(ListNode* p, ListNode* c, ListNode* prev){
//     // p->first , c->second
//     if(c == nullptr || p == nullptr )  return;
//     if(prev != nullptr) prev->next = c;
//         p->next = c->next;
//         c->next = p; 
//         if(p->next != nullptr && p->next->next != nullptr){
//            Pairs(p->next, p->next->next, c);
//         }
//         return;
// }
//     ListNode* swapPairs(ListNode* head) {
//         if (head == nullptr || head->next == nullptr) return head;
//         ListNode* first = head , *second = head->next;
//         ListNode* newHead = second;
//         Pairs(first, second, nullptr);
//         return newHead;
//     }

    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;
        ListNode* first = head , *second = head->next;
        ListNode* newHead = second;
        ListNode* temp = nullptr;
  
        while(first != nullptr && second != nullptr){
            //swapping
            temp = second->next;
            second->next = first;
           
            first->next = temp;
            if(temp == nullptr || temp->next == nullptr){
                first = temp;
                break;
            }
            
            //positioning
            
            first->next = temp->next;
            first = temp;
            second = first->next;
           
           
        }
        return newHead;
    }
};