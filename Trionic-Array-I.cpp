1class Solution {
2public:
3    bool isTrionic(vector<int>& nums) {
4        int p = -1;
5        int q = -1;
6        bool increasing = true;
7        for(int i=0;i<nums.size()-1;i++){
8            if (nums[i] == nums[i+1]){
9                return false;
10            }
11            else if (nums[i+1] < nums[i] && p == -1 && increasing ){
12                p = i;
13                increasing = false;
14            }
15            else if (nums[0]>nums[1]){
16                return false;
17            }
18            else if (nums[i+1] > nums[i] && q == -1 && !increasing ){
19                q = i;
20                increasing = true;
21            }
22            else if(nums[i+1] < nums[i] && p != -1 && increasing){
23                return false;
24            }
25           
26        }
27        if (p!=-1 && q!=-1 && increasing){
28            return true;
29        }
30        else{
31            return false;
32        }
33    }
34};