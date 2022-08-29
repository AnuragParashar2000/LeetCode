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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* fh, *ft;
        
        if(list1 == NULL && list2 == NULL)
        {
            return NULL;
        }
        else if(list1==NULL)
        {
            return list2;
        }
        else if(list2==NULL)
        {
            return list1;
        }
        
        else if(list1->val <= list2->val)
        {
            ft = list1;
            fh = list1;
            list1 = list1->next;
        }
        else
        {
            ft = list2;
            fh = list2;
            list2 = list2->next;

        }
        
        
        while(list1!=NULL && list2!=NULL)
        {
            if(list1->val <= list2->val)
            {
                ft -> next = list1;
                ft = list1;
                list1 = list1->next;
            }
            else
            {
                ft->next = list2;
                ft=list2;
                list2 = list2->next;
            }
        }
        
        if(list1==NULL)
        {
            ft->next=list2;
            while(ft!=NULL)
            {
                ft = ft->next;
            }
        }
        else
        {
            ft->next=list1;
            while(ft!=NULL)
            {
                ft = ft->next;
            }
        }
        return fh;
    }
};