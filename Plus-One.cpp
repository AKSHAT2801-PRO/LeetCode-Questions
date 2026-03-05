1class Solution {
2public:
3    vector<int> plusOne(vector<int>& digits) {
4        bool carry = false;
5        for (int i=digits.size()-1;i>=0;i--){
6            if (i == digits.size()-1){
7                digits[i] = digits[i] + 1;
8                if(digits[i] == 10 && i==0){
9                    digits[i] = 0;
10                    digits.insert(digits.begin(),1);
11
12                }
13                else if (digits[i] == 10){
14                    digits[i] = 0;
15                    carry = true;
16                }
17            }
18            else if (carry == true && i == 0){
19                digits[i] = digits[i] + 1;
20                if (digits[i] == 10){
21                    digits[i] = 0;
22                    digits.insert(digits.begin(),1);
23                }
24            }
25            else if (carry == true){
26                digits[i] = digits[i] + 1;
27                if (digits[i] == 10){
28                    digits[i] = 0;
29                    carry = true;
30                }
31                else{
32                    carry = false;
33                }
34            }
35        }
36        return digits;
37    }
38};