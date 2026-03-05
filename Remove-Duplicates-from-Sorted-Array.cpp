1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int j=0;
5        for(int i=1;i<nums.size();i++){
6            if (nums[i] != nums[j]){
7                j++;
8            }
9            else{
10                nums.erase(nums.begin()+i);
11                i--;
12            }
13        }
14        return nums.size();
15    }
16};