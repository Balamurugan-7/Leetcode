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
    char c = 'a';
    string minstring = "";
    void traverse(TreeNode* root,string s)
    {
        string t(1,c + root->val);
        if(root->left)
            traverse(root->left,t + s);
        if(root->right)
            traverse(root->right,t + s);
        if(!root->left && !root->right)
        {
            if(minstring == "" || minstring > t + s)
                minstring = t+s;
        }
    }
    string smallestFromLeaf(TreeNode* root) {
        traverse(root,"");
        return minstring;
    }
};