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
        int cnt = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            cnt++;
            temp = temp->next;
        }

        if(cnt == 1){
            return nullptr;
        }

        int pos = cnt - n;
        if(pos == 0){
            ListNode* x = head;
            head = head->next;
            delete(x);
            return head;
        }

        ListNode* mover = head;

        int count = 1;
        while (count < pos) {
            count++;
            mover = mover->next;
        }

        if(mover->next->next != nullptr){
        ListNode* newattach = mover->next->next;
        ListNode* x = mover->next;
        mover->next = newattach;
        delete(x);
        return head;
        }

        else{
        ListNode* x = mover->next;
        mover->next = NULL;
        delete (x);
        return head;
        }
        
    }
};