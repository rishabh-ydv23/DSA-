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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        while (head) {
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode *dummy=new ListNode(0);
        ListNode* tail=dummy;
        ListNode* temp=head;
        while(temp!=NULL){
            tail->next=new ListNode(temp->val);
            tail=tail->next;
            temp=temp->next;
        }

        ListNode *rev=reverseList(dummy->next);
        ListNode* p1=head;
        ListNode* p2=rev;

        while(p1 &&p2){
            if(p1->val != p2->val)return false;
            p1=p1->next;
            p2=p2->next;
        }
        return true;
    }
};