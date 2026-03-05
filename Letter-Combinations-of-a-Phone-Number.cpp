1class Solution {
2private:
3    void solve(string digit,string output,vector<string> &ans,string mapping[] ,int index){
4        //base case
5        if (index >= digit.length()){
6            ans.push_back(output);
7            return;
8        }
9        int number = digit[index] - '0';
10        string values = mapping[number];
11        for (int i=0;i<values.length();i++){
12            output.push_back(values[i]);
13            solve(digit,output,ans,mapping,index+1);
14            output.pop_back();
15        }
16    }
17public:
18    vector<string> letterCombinations(string digits) {
19        vector<string> ans;
20        if (digits.length() == 0){
21            return ans;
22        }
23        string output;
24        int index;
25        string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
26        solve(digits,output,ans,mapping,index);
27        return ans;
28
29    }
30};