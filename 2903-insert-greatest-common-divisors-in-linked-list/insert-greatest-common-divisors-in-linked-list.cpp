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
    int findgcd(int a,int b)
    {
        if(a==0)
            return b;
        return findgcd(b%a,a);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head || !head->next)   return head;
        ListNode* root = head;
        while(root->next)
        {
            int v;
            if(root->val < root->next->val)
                v = findgcd(root->val,root->next->val);
            else
                v = findgcd(root->next->val,root->val);
            ListNode* t = root->next;
            root->next = new ListNode(v);
            root->next->next = t;
            root = t;
        }
        return head;
    }
};