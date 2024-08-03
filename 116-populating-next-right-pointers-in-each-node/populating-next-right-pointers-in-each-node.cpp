/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    vector<Node*> v;
    void level(Node* root){
        if(!root)   return;
        queue<Node*> q;
        q.push(root);
        v.push_back(root);
        while(!q.empty()){
            Node* t = q.front();
            q.pop();
            if(t->left)     v.push_back(t->left);
            if(t->right)    v.push_back(t->right);
            if(t->left)     q.push(t->left);
            if(t->right)    q.push(t->right);
        }
    }
    Node* connect(Node* root) {
        level(root);
        int len = v.size();
        int f=2;
        for(int i=0;i<len-1;i++)
        {
            if(i==f-2)
            {
                f*=2;
                continue;
            }
            v[i]->next = v[i+1];
        }
        return root;
    }
};