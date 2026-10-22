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
        ListNode *temp=head;
        ListNode *temp1=head;
        ListNode *start=head;
        int count=0;

        
        while(temp1!=NULL)
        {
            count=count+1;
            temp1=temp1->next;
        }
        n=count-n;
        if(n==0)
        {
            temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        while(n>1)
        {
            head=head->next;
            n=n-1;
        }
            
            
        temp=head->next;
        head->next=temp->next;
        delete temp;
        return start;
       
    }
};
