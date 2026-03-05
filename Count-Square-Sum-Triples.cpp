1class Solution {
2public:
3    int countTriples(int n) {
4        int count = 0;
5        for(int i=1;i<n;i++){
6            for(int j=1;j<n;j++){
7                int c = sqrt(i*i + j*j);
8                if(c*c == i*i + j*j && c <= n){
9                    count++;
10                }
11            }
12        }
13        return count;
14    }
15};