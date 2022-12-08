class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *p=head;
        int counter=0;
        while(p){
            p=p->next;
            counter++;
        }
       int count=0; counter/=2;
       if(counter==0)
       head=NULL;
     
        p=head;
        while(p){
            count++;
            if(count==counter){
                p->next=p->next->next;

            }
            p=p->next;
           
           
        }
        return head;
    }
};
