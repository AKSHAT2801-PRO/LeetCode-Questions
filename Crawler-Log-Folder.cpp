1class Solution {
2public:
3    int minOperations(vector<string>& logs) {
4        stack<string> logStack;
5        for (int i=0;i<logs.size();i++){
6            if (logs[i]=="../"){
7                if(logStack.size()>0){
8                    logStack.pop();
9                }
10                else{
11                    continue;
12                }
13            }
14            else if (logs[i]=="./"){
15                continue;
16            }
17            else{
18                logStack.push(logs[i]);
19            }
20        }
21        return logStack.size();
22
23    }
24};