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
13    ListNode* removeNthFromEnd(ListNode* head, int n) {
14        ListNode* first = head;
15        ListNode* second = head;
16        
17        int listLength = 0;
18        while (first){
19            listLength++;
20            first = first->next;
21        }
22
23        int delIndex = listLength - n + 1;
24        if (delIndex == 1){
25            return head->next;
26        }
27        first = head;
28        int i = 1;
29        while(first){
30            if (i == delIndex - 1){
31                second = first;
32            }
33            else if (i == delIndex && !first->next){
34                second->next = nullptr;
35                break;
36            }
37
38            else if( i == delIndex + 1){
39                second->next = first;
40                break;
41            }
42            i++;
43            first = first->next;
44
45        }
46        return head;
47        
48    }
49};