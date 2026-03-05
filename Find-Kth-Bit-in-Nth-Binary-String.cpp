1class Solution {
2public:
3    string reverseInvert(string s){
4        for(int i=0;i<s.length();i++){
5            if (s[i] == '0'){
6                s[i] = '1';
7            }
8            else{
9                s[i] = '0';
10            }
11        }
12        int j = s.length()-1;
13        int i = 0;
14        while(i<j){
15            swap(s[i],s[j]);
16            i++;
17            j--;
18        }
19        return s;
20    }
21    void getString(int n,string &ans){
22
23        //base case
24        if (n==1){
25            ans='0';
26            return;
27        }
28        getString(n-1,ans);
29        ans = ans + '1' + reverseInvert(ans);
30    }
31    char findKthBit(int n, int k) {
32        string s;
33        getString(n,s);
34        return s[k-1];
35    }
36};