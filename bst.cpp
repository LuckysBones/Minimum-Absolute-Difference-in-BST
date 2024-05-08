class Solution {
public:
    int MIN = INT_MAX;
    int val = -1;
    int getMinimumDifference(TreeNode* root) {
        if(root->left != NULL){
            getMinimumDifference(root->left);
        }
        if(val>=0){
            MIN = min(MIN,root->val - val);
        }
        val = root->val;
        if(root->right != NULL){
            getMinimumDifference(root->right);
        }
        return MIN;
    }
};
