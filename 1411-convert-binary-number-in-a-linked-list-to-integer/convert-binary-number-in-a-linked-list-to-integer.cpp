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
    int getDecimalValue(ListNode* head) {
        int number = 0;
        ListNode* mover = head;
        int cnt = 0;
        while(mover != nullptr){
            cnt++;
            mover = mover->next;
        }

        int count = cnt-1;
        ListNode* temp = head;

        while(temp != NULL){
            number = number + (pow(2,count)*temp->val);
            temp = temp->next;
            count--;
        }

        return number;
        
    }
};