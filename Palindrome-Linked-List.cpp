1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    bool isPalindrome(ListNode* head) {
14        stack<int> s;
15        queue<int> q;
16        ListNode* temp = head;
17        while (temp){
18            s.push(temp->val);
19            q.push(temp->val);
20            temp = temp->next;
21        }
22        while (s.size()!=0 and q.size()!=0){
23            if (s.top() == q.front()){
24                s.pop();
25                q.pop();
26            }
27            else{
28                return false;
29            }
30        }
31        if (s.size() == 0 && q.size()==0){
32            return true;
33        }
34        else{
35            return false;
36        }
37    }
38};