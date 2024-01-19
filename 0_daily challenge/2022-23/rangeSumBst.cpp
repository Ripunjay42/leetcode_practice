class Solution {
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        int sumofRange(0);
        stack<TreeNode*> stack;
        stack.push(root);
        while(!stack.empty()){
            TreeNode* node = stack.top(); stack.pop();
            if(node->val>=L && node->val<=R) sumofRange+=node->val;
            if(node->val > L) {if(node->left) stack.push(node->left);}
            if(node->val < R) {if(node->right) stack.push(node->right);}
        }
        return sumofRange;
    }
};