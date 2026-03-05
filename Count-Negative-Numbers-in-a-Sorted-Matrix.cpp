1class Solution {
2public:
3    int countNegatives(vector<vector<int>>& grid) {
4        int count = 0;
5        for (vector<int> row : grid){
6            for (int i=0;i<row.size();i++){
7                if (row[i]<0){
8                    count = count + (row.size()-i);
9                    break;
10                }
11            }
12        } 
13        return count;
14    }
15};