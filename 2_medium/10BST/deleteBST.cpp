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
    TreeNode* deleteNode(TreeNode* root, int key) 
    {
        if(root == nullptr) return root;
        if(key < root->val) 
            root->left = deleteNode(root->left, key);
        else if(key > root->val) 
            root->right = deleteNode(root->right, key);
        else {
            if(root->left == nullptr) 
                return root->right; // one child case
            else if(root->right == nullptr) 
                return root->left; // one child case
            TreeNode* temp = root->right; // to find min from right subtree
            while(temp->left != nullptr) 
                temp = temp->left; // temp has min
            root->val = temp->val; // change root to min
            root->right = deleteNode(root->right, temp->val); // delete old min
        }
        return root;
    }
};