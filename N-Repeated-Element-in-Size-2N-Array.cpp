1class Solution {
2public:
3    int repeatedNTimes(vector<int>& nums) {
4        int n = nums.size() / 2;
5        sort(nums.begin(),nums.end());
6        int count = 1;
7        int check = nums[0];
8        for(int i=1;i<nums.size();i++){
9            if (nums[i]==check){
10                count++;
11            }
12            else{
13                check = nums[i];
14                count = 1;
15            }
16            if(count == n){
17                return check;
18            }
19        }
20        return 0;
21    }
22};