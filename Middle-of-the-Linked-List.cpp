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
13    ListNode* middleNode(ListNode* head) {
14        ListNode* first = head;
15        ListNode* second = head;
16        int nodesCovered = 0;
17        while(first){
18            first = first->next;
19            nodesCovered++;
20            if(nodesCovered % 2 == 0) {
21                second = second->next;
22            }
23        }
24        return second;
25    }
26};