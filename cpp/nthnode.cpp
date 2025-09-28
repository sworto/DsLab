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
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        struct ListNode* p1=head;
        struct ListNode* p2=head;
        for(i=0;i<n;i++)
        {
            p2=p2->next;
        }
        while(p2)
        {
            p1=p1->next;
            p2=p2->next;
        }
        struct ListNode *temp=head;
        while(temp->next!=p1)
        {
            temp=temp->next;
        }
        temp->next=p1->next;
        return head;
    }
};