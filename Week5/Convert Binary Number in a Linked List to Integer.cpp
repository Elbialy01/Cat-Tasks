/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode *n=head;
 int y=0;
        while(n)
        {
            n=n->next;
            y++;
        }
        y--;
        int res=0;
        while(head){
            res+=head->val*pow(2,y--);
            head=head->next;
        }
        return res;
        
    }
};
