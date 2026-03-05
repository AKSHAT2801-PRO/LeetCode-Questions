1class Solution {
2public:
3    int totalMoney(int n) {
4        int balance = 0;
5        int monday = 1;
6        int day_deposit = monday;
7        for (int i=1;i<=n;i++){
8            if (i%7 == 0){
9                balance += day_deposit;
10                monday++;
11                day_deposit = monday;
12            }
13            else{
14                balance += day_deposit;
15                day_deposit++;
16            }
17        }
18        return balance;
19    }
20};