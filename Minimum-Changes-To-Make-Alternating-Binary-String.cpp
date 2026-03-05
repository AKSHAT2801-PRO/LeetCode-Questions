1class Solution {
2public:
3    int minOperations(string s) {
4        int changesOne = 0;
5        for (int i=0;i<s.length();i++){
6            if(i % 2 == 0 && s[i] != '1'){
7                changesOne++;
8            }
9            else if(i%2 != 0 && s[i] != '0'){
10                changesOne++;
11            }
12        }
13        int changesTwo = s.length()-changesOne;
14        // for (int i=0;i<s.length();i++){
15        //     if(i%2 == 0 && s[i] != '0'){
16        //         changesTwo++;
17        //     }
18        //     else if(i%2 != 0 && s[i] != '1'){
19        //         changesTwo++;
20        //     }
21        // }
22        return min(changesOne,changesTwo);
23        
24    }
25};