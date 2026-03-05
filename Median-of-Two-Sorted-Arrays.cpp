1class Solution {
2public:
3    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
4        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
5        sort (nums1.begin(),nums1.end());
6        int e = nums1.size();
7        double ans = 0;
8        if (nums1.size()%2 == 0){ // Even case
9            double m1 = nums1[e/2];
10            double m2 = nums1[e/2-1];
11            ans = ((m1 + m2 )/2);
12            return ans;
13
14        }
15        else{  // Odd case
16            ans = nums1[e/2];
17            return ans;
18        }
19    }
20};