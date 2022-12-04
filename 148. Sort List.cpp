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
    ListNode* sortList(ListNode* head) {
        multiset<int>ms;
        ListNode *p=head,*k=head;
        while(p){
            ms.insert(p->val);
            p=p->next;
            
        }
        while(k){
            k->val=*ms.begin();
            ms.erase(ms.begin());
            k=k->next;
        }
        return head;
        
    }
};
