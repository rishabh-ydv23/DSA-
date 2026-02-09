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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL)return head;
        ListNode* temp=head;        //odd pointer
        ListNode* temp2=head->next;     //even pointer
        ListNode* evenHead=temp2;     // even list ka start save

        while(temp!=NULL && temp2!=NULL && temp2->next!=NULL){
            temp->next=temp2->next;
            temp=temp->next;

            temp2->next=temp->next;
            temp2=temp2->next;
        }
        temp->next=evenHead;
        return head;
    }
};