1class Solution {
2public:
3    int minPartitions(string n) {
4        int ans = 48;
5        for (int i=0;i<n.length();i++){
6            if ((int)n[i] > ans){
7                ans = (int)n[i];
8            }
9        }
10        return ans-48;
11    }
12};