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
    ListNode* insertionSortList(ListNode* head) {
        ListNode *n=head;
        multiset<int>ms;
        while(n){
            ms.insert(n->val);
            n=n->next;
        }
        auto it =ms.begin();
        n=head;
        while(n){
            n->val=*it;
            it++;
            n=n->next;
        }
        return head;
 
    }
};
