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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int count = 0;
        while(temp!=NULL)
        {
            temp = temp -> next;
            count++;
        }
        if(count==1)
        {
            return head;
        }
        ListNode* temp2 = head;

        int a = 0;
            while(temp2!=NULL)
        {
            temp2 = temp2 -> next;
            a++;
            if(a==(count/2))
            {
                return temp2;
            }
        }
        return temp2;
    }
};