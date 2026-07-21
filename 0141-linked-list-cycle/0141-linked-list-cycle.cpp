class Solution {
public:
    bool hasCycle(ListNode *head) {

        ListNode* slow = head;
        ListNode* fast = head;

        bool res = false;
        while(fast != NULL && fast->next != NULL){

            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow){
                res = true;
                break;
            }
        }

        return res;
    }
};