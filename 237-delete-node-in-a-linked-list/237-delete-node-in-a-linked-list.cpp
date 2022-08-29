/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp, *curr;
        temp = node -> next;
        curr = temp;
        while(temp!=NULL && curr!=NULL)
        {
        node->val = temp->val;
        temp = temp->next;
        curr = curr -> next;
            if(node->next->next==NULL)
            {
                node->next=NULL;
            }
            else{
        node = node->next;
            }
        }
    }
};