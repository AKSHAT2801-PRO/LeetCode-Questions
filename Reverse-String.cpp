1class Solution {
2public:
3    void reverseString(vector<char>& s) {
4        int j = s.size()-1;
5        for (int i=0;i<s.size()/2;i++){
6            swap(s[i],s[j--]);
7        }
8    }
9};