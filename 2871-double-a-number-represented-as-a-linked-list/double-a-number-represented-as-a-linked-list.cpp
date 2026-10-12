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
    ListNode* doubleIt(ListNode* head) {
        stack<int> st;
        vector<int> v;
        ListNode* mover = head;
        while (mover != nullptr) {
            st.push(mover->val);
            mover = mover->next;
        }
        int mul = 1;
        int multi = 0;
        int carry = 0;
        while (!st.empty()) {
            multi = st.top() * 2;
            mul = multi % 10 + carry;
            carry = multi / 10;
            v.push_back(mul);
            st.pop();
        }

        if(carry) v.push_back(carry);

        ListNode* head1 = new ListNode(v[v.size() - 1]);
        ListNode* mover1 = head1;
        for (int i = v.size() - 2; i >= 0; i--) {
            ListNode* temp = new ListNode(v[i]);
            mover1->next = temp;
            mover1 = temp;
        }

        return head1;
    }
};