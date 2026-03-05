1class Solution {
2public:
3    int minSwaps(vector<vector<int>>& grid) {
4    int n = grid.size();
5
6    // Step 1: Count trailing zeros in each row
7    vector<int> trailingZero(n, 0);
8
9    for (int i = 0; i < n; i++) {
10        int count = 0;
11        for (int j = n - 1; j >= 0; j--) {
12            if (grid[i][j] == 0)
13                count++;
14            else
15                break;
16        }
17        trailingZero[i] = count;
18    }
19
20    int swaps = 0;
21
22    // Step 2: Greedy placement
23    for (int i = 0; i < n; i++) {
24        int required = n - i - 1;
25
26        int j = i;
27        while (j < n && trailingZero[j] < required)
28            j++;
29
30        // Not possible
31        if (j == n)
32            return -1;
33
34        // Bring row j to position i (bubble up)
35        while (j > i) {
36            swap(trailingZero[j], trailingZero[j - 1]);
37            swaps++;
38            j--;
39        }
40    }
41
42    return swaps;
43}
44};