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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        if(!head)   return head;
        map<int,int> m;
        for(int& k:nums)
            m[k]++;
        while(m[head->val] != 0)
            head = head->next;
        ListNode* t = head;
        while(t->next && t->next->next)
        {
            if( m[t->next->val] != 0)
                t->next = t->next->next;
            else
                t = t->next;
        }
        if(t->next)
            if( m[t->next->val] != 0)
                t->next = nullptr;
        return head;
    }
};