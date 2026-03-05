1class Solution {
2public:
3    bool binarySearch(vector<int> row,int target){
4        int s = 0;
5        int e = row.size()-1;
6        int mid = s + (e-s)/2;
7        while(s<=e){
8            if (row[mid] == target){
9                return true;
10            }
11            else if (row[mid] > target){
12                e = mid-1;
13            }
14            else{
15                s = mid +1;
16            }
17            mid = s + (e-s)/2;
18        }
19        if (row[mid] == target){
20            return true;
21        }
22        else{
23            return false; 
24        }
25    }
26    bool searchMatrix(vector<vector<int>>& matrix, int target) {
27        bool ans;
28        for (vector<int> row:matrix){
29            if(row[0]<=target && row[row.size()-1]>=target){
30                ans = binarySearch(row,target);
31                break;
32            }
33        }
34        return ans;
35    }
36};