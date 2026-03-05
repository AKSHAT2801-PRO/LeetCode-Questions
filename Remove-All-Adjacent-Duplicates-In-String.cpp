1class Solution {
2public:
3    string removeDuplicates(string s) {
4        stack<char> stk;
5        for (int i=0;i<s.length()-1;i++){
6            if(stk.size()==0){
7                stk.push(s[i]);
8            }
9            else if(s[i] == stk.top()){
10                s.erase(i-1,2);
11                // s.erase(i,1);
12                stk.pop();
13                i = i-2;
14            }
15            else{
16                stk.push(s[i]);
17            }
18        }
19        if(s.length()>=2 && s[s.length()-2] == s[s.length()-1]){
20            s.erase(s.length()-2,2);
21        }
22        return s;
23        
24    }
25};