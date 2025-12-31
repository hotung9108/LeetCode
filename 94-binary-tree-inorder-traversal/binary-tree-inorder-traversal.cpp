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
    vector<int> pq;
    vector<int> inorderTraversal(TreeNode* root) {
        if(root != nullptr){
            pq = inorderTraversal(root->left);
            pq.push_back(root->val);
            pq = inorderTraversal(root->right);
        }
        return pq;
    }
};