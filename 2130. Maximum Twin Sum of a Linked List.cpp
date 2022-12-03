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
    int pairSum(ListNode* head) {
        int n=0;
        stack<int>s;
        ListNode *p=head;
        while(p){
            n++;
            p=p->next;
        }
        for(int i=0;i<n/2;i++){
            s.push(head->val);
            head=head->next;     
        }
        set<int>a;
        while(head&&s.size()){
            a.insert(s.top()+head->val);
            s.pop();
            head=head->next;
        }
        auto it =a.end();
        it--;
        return *it;
    }
  
};
