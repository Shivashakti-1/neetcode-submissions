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
    void reorderList(ListNode* head) {
        ListNode* left =head;
        ListNode* fast = head;
        while(fast!=nullptr && fast->next!=nullptr)
        {
            fast=fast->next->next;
            left=left->next;
        }

        ListNode* second=left->next;
        left->next=nullptr;

        ListNode* prev=nullptr;
        while(second!=nullptr)
        {
            ListNode* next=second->next;
            second->next=prev;
            prev=second;
            second=next;
        }

        ListNode* first = head;
second = prev;

while (second != nullptr) {

    ListNode* temp1 = first->next;
    ListNode* temp2 = second->next;

    first->next = second;
    second->next = temp1;

    first = temp1;
    second = temp2;

    }}
};
