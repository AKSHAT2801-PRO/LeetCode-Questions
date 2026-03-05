1class Solution {
2public:
3    string reversePrefix(string word, char ch) {
4        int to = 0;
5        for(int i=0;i<word.length();i++){
6            if(word[i]== ch){
7                to = i;
8                break;
9            }
10        }
11        stack<char> stk;
12        for (int i=0;i<=to;i++){
13            stk.push(word[i]);
14        } 
15        string suffix = word.substr(to+1,word.length()-to-1);
16        string ans = "";
17        while(stk.size()>0){
18            ans += stk.top();
19            stk.pop();
20        }
21        return ans+suffix;
22    }
23};