class Solution {
public:
    TreeNode* invertTree(TreeNode* root) 
    {
        if(root == NULL) return root; //Base Case
        //swapping children of current node
        TreeNode* temp = root->left; 
        root->left =root->right ; 
        root->right = temp;
        //recursively calling current node children
        invertTree(root->left);
        invertTree(root->right);
        return root;  
    }
};