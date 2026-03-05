1class Solution {
2public:
3    void solve(vector<int> nums,vector<vector<int>> &ans,int index){
4        //base case
5        if (index >= nums.size()){
6            ans.push_back(nums);
7            return;
8        }
9        for (int i=index;i<nums.size();i++){
10            swap(nums[index],nums[i]);
11            solve(nums,ans,index+1);
12        }
13    }
14
15    vector<vector<int>> permute(vector<int>& nums) {
16        vector<vector<int>> ans;
17        int index = 0;
18        solve(nums,ans,index);
19        return ans;
20    }
21};