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
            ListNode* t = root->next;
            if(root->val < root->next->val)
                root->next = new ListNode(findgcd(root->val,root->next->val)); 
            else
                root->next = new ListNode(findgcd(root->next->val,root->val)); 
            root->next->next = t;
            root = t;
        }
        return head;
    }
};