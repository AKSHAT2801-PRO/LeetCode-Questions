1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char> bracs;
5        for (char paren:s){
6            if(paren == ')'){
7                if(bracs.size() == 0){
8                    return false;
9                }
10                else if (bracs.top() == '('){
11                    bracs.pop();
12                    continue;
13                }
14                else{
15                    return false;
16                }
17            }
18            else if (paren == ']'){
19                if(bracs.size() == 0){
20                    return false;
21                }
22                else if (bracs.top() == '['){
23                    bracs.pop();
24                    continue;
25                }
26                else{
27                    return false;
28                }
29            }
30            else if (paren == '}'){
31                if(bracs.size() == 0){
32                    return false;
33                }
34                else if (bracs.top() == '{'){
35                    bracs.pop();
36                    continue;
37                }
38                else{
39                    return false;
40                }
41            }
42            else{
43                bracs.push(paren);
44            }
45        }
46        if(bracs.size() == 0){
47            return true;
48        }
49        else{
50            return false;
51        }
52    }
53};