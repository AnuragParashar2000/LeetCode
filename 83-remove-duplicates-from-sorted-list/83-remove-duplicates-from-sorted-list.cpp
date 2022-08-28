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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *t1 = head, *t2 = head;
        if(head==NULL)
        {
            return NULL;
        }
        else{
        
        while(t2!=NULL)
        {
            if(t1->val==t2->val){
            t2 = t2->next;
            }
            else{
                t1->next = t2;
                t1=t2;
                t2=t2->next;
            }
            
        }
        }
        t1->next = t2;
        return head;
    }
};