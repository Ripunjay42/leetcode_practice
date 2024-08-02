/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) 
    {
        if(root==NULL)
        {
            return 0;
        }

        int n = root->children.size();

        if(n==0)
            return 1;

        vector<int> v(n);    

        for(int i = 0; i < n; ++i)
        {
            v[i] = maxDepth(root->children[i]);
        }
            
        int m_depth = 1 + *max_element(v.begin(), v.end());

        return m_depth;
    }
};