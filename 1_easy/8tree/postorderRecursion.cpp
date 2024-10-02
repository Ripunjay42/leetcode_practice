class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        postorder(root, res);
        return res;
    }

private:
    void postorder(TreeNode* root, vector<int>& res) {
        if (!root) return;
        postorder(root->left, res);
        postorder(root->right, res);
        res.push_back(root->val);
    }
};