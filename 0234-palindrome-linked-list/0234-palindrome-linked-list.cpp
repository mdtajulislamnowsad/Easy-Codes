class Solution {
public:
   

    bool isPalindrome(ListNode* head) {

        vector<int>v;

        ListNode* tmp = head;
        while(tmp != NULL){
            v.push_back(tmp->val);
            tmp= tmp->next;
        }
        
        vector<int>x;

        x = v;
        reverse(x.begin(),x.end());

        return (x == v ? true : false);

    }
};