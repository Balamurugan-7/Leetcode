/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int c=1;
    void fun(TreeNode* root)
    {
        if(root->left)
        {
            c++;
            fun(root->left);
        }
        if(root->right)
        {
            c++;
            fun(root->right);
        }
    }
    int countNodes(TreeNode* root) {
        if(!root)   return 0;
        fun(root);
        return c;
    }
};