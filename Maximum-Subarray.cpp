1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int sum = 0;
5        int maxSum = nums[0];
6        for (int i=0;i<nums.size();i++){
7            sum = sum+nums[i];
8            maxSum = max(sum,maxSum);
9            if (sum<0){
10                sum = 0;
11            }
12        }
13
14        return maxSum;
15    }
16};