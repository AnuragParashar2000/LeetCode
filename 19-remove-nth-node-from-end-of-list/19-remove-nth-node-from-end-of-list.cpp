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
        ListNode *temp = head;
        int count=0;
        while(temp!=NULL)
        {
            temp = temp-> next;
            count ++;
        }
        int a=1;
        if(count==1)
        {
            return NULL;
        }
        if(count==n)
        {
            head=head->next;
            return head;
        }
        temp=head;
        while(a<count-n)
        {
            temp = temp -> next;
            a++;
        }
        temp->next = temp->next->next;
        return head;
    }
    
};