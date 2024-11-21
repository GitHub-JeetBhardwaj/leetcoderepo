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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *h=nullptr;
        ListNode *test=h;
        int size=0;
        for(ListNode *t=head;t!=nullptr;t=t->next){
            size++;
        }
        int nodetodel=size-n;
        int i=0;
        for(ListNode *t=head;t!=nullptr;t=t->next){
            if(nodetodel==i){
                i++;
            }
            else{
                if(h==nullptr){
                    h=new ListNode;
                    h->val=t->val;
                    h->next=nullptr;
                    test=h;
                }
                else{
                    ListNode *p=new ListNode;
                    p->val=t->val;
                    p->next=nullptr;
                    test->next=p;
                    test=test->next;
                }
                i++;
            }
        }
    return h;}
};