1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10    bool check_arr(ListNode* temp,vector<ListNode*> address){
11        for (ListNode* add:address){
12            if (temp == add){
13                return true;
14            }
15        }
16        return false;
17    }
18public:
19    bool hasCycle(ListNode *head) {
20        vector<ListNode*> address;
21        ListNode* temp = head;
22        while(temp){
23            if(check_arr(temp,address)){
24                return true;
25            }
26            else{
27                address.push_back(temp);
28                temp = temp->next;
29            }
30        }
31        return false;
32    }
33};