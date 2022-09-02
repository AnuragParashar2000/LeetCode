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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA = headA, *tempB = headB;
        int lenA = 0, lenB = 0;
        while(tempA!=NULL)
        {
            lenA++;
            tempA = tempA -> next; 
        }
        while(tempB!=NULL)
        {
            lenB++;
            tempB = tempB -> next;     
        }
        int diff = 0;
        tempA = headA;
        tempB = headB;
        if(lenA==lenB)
        {
            
            
            while(tempA!=NULL && tempB!=NULL)
            {
                if(tempA == tempB)
                {
                    break;
                }
                else{
                    tempA = tempA->next;
                    tempB = tempB->next;
                }
            }
        }
        else if(lenA<lenB)
        {
            diff = lenB-lenA;
            for(int i=0;i<diff;i++)
            {
                tempB = tempB -> next;
            }
            for(int j=0;j<lenA;j++)
            {
                if(tempA == tempB)
                {
                    break;
                }
                tempA = tempA -> next;
                tempB = tempB -> next;
            }
        }
        else{
            diff = lenA-lenB;
            for(int i=0;i<diff;i++)
            {
                tempA = tempA -> next;
            }
            for(int j=0;j<lenB;j++)
            {
                
                if(tempA == tempB)
                {
                    break;
                }
                tempA = tempA -> next;
                tempB = tempB -> next;
            }
        }
        return tempA;
    }
    
};