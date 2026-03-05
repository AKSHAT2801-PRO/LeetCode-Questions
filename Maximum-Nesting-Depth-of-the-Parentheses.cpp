1class Solution {
2public:
3    int maxDepth(string s) {
4        int maxDepth=0;
5        stack <char> stk;
6        for (int i=0;i<s.length();i++){
7            if(s[i]== '('){
8                stk.push(s[i]);
9            }
10            if (s[i] == ')'){
11                if( stk.size() > maxDepth ){
12                    maxDepth = stk.size();
13                }
14                stk.pop();
15            }
16        }
17        return maxDepth;
18    }
19};