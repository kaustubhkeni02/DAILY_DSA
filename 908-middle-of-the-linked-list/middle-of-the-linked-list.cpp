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
    ListNode* middleNode(ListNode* head) {
        int cnt = 0;
        ListNode* temp = head;
        while(temp != nullptr){
            cnt++;
            temp = temp->next;
        }
        int count = 1;
        ListNode* mover = head;
        if(cnt%2==0){
            while(count<(cnt/2)+1){
                mover = mover->next;
                count++;
            }

            return mover;
        }

        else{
            while(count<(cnt/2)+1){
                mover = mover->next;
                count++;
            }

            return mover;
        }
        
    }
};