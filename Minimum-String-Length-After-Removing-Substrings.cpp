1class Solution {
2public:
3    int minLength(string s) {
4        stack <char> stk;
5        for(int i=0;i<s.length();i++){
6            if(stk.size()==0){
7                stk.push(s[i]);
8            }
9            else{
10                if(s[i]=='B' && stk.top() == 'A'){
11                    stk.pop();
12                }
13                else if(s[i]=='D' && stk.top() == 'C'){
14                    stk.pop();
15                }
16                else{
17                    stk.push(s[i]);
18                }
19            }
20        }
21        return stk.size();
22    }
23};