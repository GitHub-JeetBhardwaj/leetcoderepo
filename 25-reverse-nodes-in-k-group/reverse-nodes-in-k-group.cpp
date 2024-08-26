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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int jeet=0;
        ListNode *t=head;
        ListNode *T=head;
        while (t!=nullptr){
            vector<int>rev;
            for(int i=0;i<k&&t!=nullptr;){
                rev.push_back(t->val);
                t=t->next;
                i+=1;
                if(t==nullptr&&i<k){
                    jeet=1;
                }
            }
            if(jeet==1){
                for(int i=0;i<rev.size();i++){
                    T->val=rev[i];
                    T=T->next;
                }
            }
            else{
                for(int i=rev.size()-1;i>=0;i--){
                    T->val=rev[i];
                    T=T->next;
                }
            }

        }

    return head;
    }
};