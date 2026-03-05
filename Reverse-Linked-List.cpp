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
13
14    void reverse(ListNode* &head, ListNode* current ,ListNode* previous){
15
16        // base case
17        if (!current){
18            head = previous;
19            return;
20        }
21        ListNode* forward = current->next;
22        reverse(head,forward,current);
23        current->next = previous;
24        previous = current;
25
26    }
27
28    ListNode* reverseList(ListNode* head) {
29        //using recursion
30        ListNode* current = head;
31        ListNode* previous = nullptr;
32
33        reverse(head,current,previous);
34        return head;
35    }
36};