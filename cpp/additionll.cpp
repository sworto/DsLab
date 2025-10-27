#include <stdio.h>
#include <vector.h>
using namespace std;
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int pos=1;
        int sum=0;
        while(l1||l2)
        {
            if(l1&&l2)
            {
                sum+=pos*(l1->val+l2->val);
                l1=l1->next;
                l2=l2->next;
                pos*=10;
            }
            else if(l1&&l2==NULL)
            {
                sum+=pos*(l1->val);
                l1=l1->next;
                pos*=10;
            }
            if(l1==NULL&&l2)
            {
                sum+=pos*(l2->val);
                l2=l2->next;
                pos*=10;
            }
        }
        struct ListNode* head;
        struct ListNode* ptr;
        head=(struct ListNode*)malloc(sizeof(ListNode));
        ptr=head;
        string numstring=to_string(sum);
        for(int i=numstring.length()-1;i>=0;i++)
        {
            ptr->val=numstring[i];
            ptr->next=(struct ListNode*)malloc(sizeof(ListNode))
            ptr=ptr->next;
        }
        ptr->next=NULL;
        return head;
    }
};