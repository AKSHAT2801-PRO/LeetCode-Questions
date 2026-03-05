1class Solution {
2    int minm_len(vector<string> &strs){
3        int len = strs[0].length();
4        for (int i=1;i<strs.size();i++){
5            if (strs[i].length()< len){
6                len = strs[i].length();
7            }
8        }
9        return len;
10    }
11public:
12    
13    string longestCommonPrefix(vector<string>& strs) {
14        string prefix = strs[0];
15        for (int i=1;i<strs.size();i++){
16            string word = strs[i];
17            for (int j=0;j<word.length();j++){
18                if (word[j] != prefix[j]){
19                    prefix = prefix.substr(0,j);
20                    break;
21                }
22            }
23        }
24        if (prefix.length() > minm_len(strs)){
25            prefix = prefix.substr(0,minm_len(strs));
26        }
27        return prefix;
28    }
29};