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
    ListNode* deleteMiddle(ListNode* head) {
        int cnt = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            cnt++;
            temp = temp->next;
        }

        if(head == NULL) return NULL;

        if(head->next == NULL){
            return NULL;
        }

        int count = 0;
        ListNode* mover = head;
        while (count < (cnt / 2) - 1) {
            mover = mover->next;
            count++;
        }

        if (mover->next->next != NULL) {
            ListNode* target = mover->next;
            mover->next = target->next;
            delete (target);
            return head;
        }

        else {
            ListNode* target = mover->next;
            mover->next = nullptr;
            delete (target);
            return head;
        }
    }
};