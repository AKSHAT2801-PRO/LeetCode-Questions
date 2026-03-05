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
14void method(TreeNode* root,vector<int> &ans){
15        if(!root){
16            ans.push_back(1000000);
17            return;
18        }
19        // left->right->root
20        method(root->left,ans); //left
21        method(root->right,ans); //right
22        ans.push_back(root->val); //root
23        return;
24
25    }
26    bool isSameTree(TreeNode* p, TreeNode* q) {
27        vector<int> pans;
28        vector<int> qans;
29        method(p,pans);
30        method(q,qans);
31        if(pans.size() != qans.size()){
32            return false;
33        }
34        for (int i=0;i<pans.size();i++){
35            if (pans[i] != qans[i]){
36                return false;
37            }
38        }
39        return true;
40    }
41};