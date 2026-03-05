1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    void method(TreeNode* root,vector<int> &ans){
15        if(!root){
16            return;
17        }
18        // root->left->right
19        method(root->left,ans); //left
20        method(root->right,ans); //right
21        ans.push_back(root->val); //root
22        return;
23
24    }
25    vector<int> postorderTraversal(TreeNode* root) {
26        vector<int> ans;
27        method(root,ans);
28        return ans;
29    }
30};