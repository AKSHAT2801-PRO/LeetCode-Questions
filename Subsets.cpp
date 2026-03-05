1class Solution {
2public:
3    void solve(vector<int> nums, vector<int> output, int i,vector<vector<int>>& ans){
4        //base case
5        if (i >= nums.size()){
6            ans.push_back(output);
7            return ;
8        }
9        // exclude case
10        solve (nums,output,i+1,ans);
11        // include case
12        int element = nums[i];
13        output.push_back(element);
14        solve (nums,output,i+1,ans);
15    }
16public:
17    vector<vector<int>> subsets(vector<int>& nums) {
18        vector<vector<int>> ans;
19        vector <int> output ;
20        int i = 0;
21        solve(nums,output,i,ans);
22        return ans;
23    }
24};