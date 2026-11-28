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
    bool hasCycle(ListNode* head) {
       ListNode* s=head;
       ListNode* f=head;

       while(s!=nullptr && f != nullptr && f->next != nullptr)
       {
        s=s->next;
        f=f->next->next;
        if(s == f)
        {
            return true;
        }
       } 
       return false;
    }
};
