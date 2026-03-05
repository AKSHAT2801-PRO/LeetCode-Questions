1class Solution {
2public:
3    int countStudents(vector<int>& students, vector<int>& sandwiches) {
4        queue<int> student;
5        for (int i=0;i<students.size();i++){
6            student.push(students[i]);
7        }
8        queue<int> sandwich;
9        for (int i=0;i<sandwiches.size();i++){
10            sandwich.push(sandwiches[i]);
11        }
12        int count = 0;
13        while(student.size()>0){
14            if (student.front()==sandwich.front()){
15                student.pop();
16                sandwich.pop();
17                count = 0;
18            }
19            else{
20                int temp = student.front();
21                student.pop();
22                student.push(temp);
23                count++;
24            }
25            if(count == student.size()){
26                break;
27            }
28
29        }
30        return count;
31    }
32};