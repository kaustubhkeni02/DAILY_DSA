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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp = nullptr;
        if(head == nullptr || head->next == nullptr){
            return head;
        }

        int len = 0;
        ListNode* mover = head;
        while(mover != nullptr){
            len++;
            mover = mover->next;
        }

        if(k%len == 0) return head;
        
        for (int i = 0; i < k%len ; i++) {
            ListNode* x = head;
            ListNode* prev = head;
            while (prev->next != nullptr && prev->next->next != nullptr) {
                prev = prev->next;
            }

            if (prev->next != nullptr) {
                temp = prev->next;

                prev->next = nullptr;

                temp->next = x;

                head = temp;
            }
        }

        return head;
    }
};