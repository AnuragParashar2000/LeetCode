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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp1=head, *temp2=head;
        int count =0;
        while(temp2!=NULL)
        {
            count++;
            temp2 = temp2 -> next;
        }
        temp2=head;
        int begin = 1;
        int end = 1;
        while(begin<k)
        {
            temp1 = temp1->next;
            begin++;
        }
        while(end<count - k + 1)
        {
            temp2 = temp2->next;
            end++;
        }
        int b = temp1->val;
        temp1 -> val = temp2->val;
        temp2->val = b;
        return head;
        
    }
};