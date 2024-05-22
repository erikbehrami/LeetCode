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
       vector<int> v;
    void elements(TreeNode* root) {
        if (!root) 
            return;
        
        v.push_back(root->val);
        elements(root->left);
        elements(root->right);
    }
    
    bool findTarget(TreeNode* root, int k) {
        elements(root);
        for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {

            if (v.at(i) + v.at(j) == k && i != j)
            {
                return true;
            }
        }
    }
    return false;
}
};
   