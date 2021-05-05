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
        ListNode* l3=NULL,*l5;
        ListNode* zero=new ListNode(0);
        l3=new ListNode();
        l5=new ListNode();
        l3->val=l1->val+l2->val;
        int carry=l3->val/10;
        l3->val=l3->val%10;
        if(l1->next!=NULL && l2->next!=NULL){
            ListNode* l4=addTwoNumbers(l1->next,l2->next);
            l3->next=l4;
            l3->next->val+=carry;
        }
        else if(l1->next!=NULL){
            ListNode* l4=addTwoNumbers(l1->next,zero);
            l3->next=l4;
            l3->next->val+=carry;
            
        }
        else if(l2->next!=NULL){
            ListNode* l4=addTwoNumbers(zero,l2->next);
            l3->next=l4;
            l3->next->val+=carry;
            }  
        l5=l3;
        while(l3->next!=NULL && l3->next->val/10>=1){
                carry=l3->next->val/10;
                l3->next->val=l3->next->val%10;
                if(l3->next->next==NULL){
                    l3->next->next=new ListNode(carry);
                }
                else{
                    l3->next->next->val+=carry;
                }
            l3=l3->next;
        }
        if(l1->next==NULL && l2->next==NULL && carry!=0)
        {
            l3->next=new ListNode(carry);
            return l3;
        }
        return l5;
    }
};
