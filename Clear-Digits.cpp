1class Solution {
2public:
3    string clearDigits(string s) {
4        stack<char> stk;
5        stk.push(s[0]);
6        for(int i=1;i<s.length();i++){
7            if( 
8                s[i]=='0'||
9                s[i]=='1'||
10                s[i]=='2'||
11                s[i]=='3'||
12                s[i]=='4'||
13                s[i]=='5'||
14                s[i]=='6'||
15                s[i]=='7'||
16                s[i]=='8'||
17                s[i]=='9'
18            ){
19                stk.pop();
20            }
21            else{
22                stk.push(s[i]);
23            }
24        }
25        if(stk.size()==0){
26            return "";
27        }
28        else{
29            string ans = "";
30            int i=0;
31            while(stk.size()>0){
32                ans += stk.top();
33                stk.pop();
34            }
35            reverse(ans.begin(),ans.end());
36            return ans;
37        }
38    }
39};