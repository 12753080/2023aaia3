//week16-4a.cpp學習計畫Binary tree(隱藏)第一題
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==nullptr)return 0;
        int ans1 = maxDepth(root->left);
        int ans2 = maxDepth(root->right);
        return max(ans1, ans2) + 1;
    }
};
