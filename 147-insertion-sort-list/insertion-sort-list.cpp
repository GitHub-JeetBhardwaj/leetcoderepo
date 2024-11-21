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
        vector<int>list;
        for(ListNode *t=head;t!=nullptr;t=t->next){
            list.push_back(t->val);
        }
        ListNode *h=nullptr;
        ListNode *test=h;
        sort(list.begin(),list.end());
        for(int i=0;i<list.size();i++){
            if(h==nullptr){
                h=new ListNode;
                h->val=list[i];
                h->next=nullptr;
                test=h;
            }
            else{
                ListNode *p=new ListNode;
                p->val=list[i];
                p->next=nullptr;
                test->next=p;
                test=test->next;

            }
        }
    return h;}
};