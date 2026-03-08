1class Solution {
2public:
3    bool search(vector<string> nums,string target){
4        for (int i=0;i<nums.size();i++){
5            if (nums[i] == target){
6                return true;
7            }
8        }
9        return false;
10    }
11    void missingNums(string &firstNum,int j,int k,vector<string> nums){
12        // base Case
13        bool pres = search(nums,firstNum);
14        if(!pres){
15            return;
16        }
17        if(j<0 || k<0){
18            return;
19        }
20        firstNum[j] = '1';
21        missingNums(firstNum,j= j-1,k,nums); 
22        firstNum[k] = '1';
23        missingNums(firstNum,j,k=j-2,nums);
24        return;
25
26    }
27
28    string findDifferentBinaryString(vector<string>& nums) {
29        int numLen = nums[0].size();
30        string firstNum(numLen,'0');
31        if (numLen > 3){
32            missingNums(firstNum,numLen,numLen,nums);
33        }
34        else{
35            missingNums(firstNum,numLen-1,numLen-1,nums);
36        }
37        return firstNum;
38    }
39};