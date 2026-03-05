1class Bank {
2public:
3    vector<long long> balance;
4    Bank(vector<long long>& balance) {
5        this->balance = balance;
6    }
7    
8    bool transfer(int account1, int account2, long long money) {
9        if (account1 <= balance.size() && account2 <= balance.size()){
10            if(balance[account1- 1] >= money){
11                balance[account1-1] -= money;
12                balance[account2-1] += money;
13                return true;
14            }
15            else{
16                return false;
17            }
18        }
19        else{
20            return false;
21        }
22        
23    }
24    
25    bool deposit(int account, long long money) {
26        if (account <= balance.size()){
27            balance[account-1] += money;
28            return true;
29        }
30        else{
31            return false;
32        }
33    }
34    
35    bool withdraw(int account, long long money) {
36        if (account <= balance.size()){
37            if(balance[account- 1] >= money){
38                balance[account-1] -= money;
39                return true;
40            }
41            else{
42                return false;
43            }
44        }
45        else{
46            return false;
47        }
48    }
49};
50
51/**
52 * Your Bank object will be instantiated and called as such:
53 * Bank* obj = new Bank(balance);
54 * bool param_1 = obj->transfer(account1,account2,money);
55 * bool param_2 = obj->deposit(account,money);
56 * bool param_3 = obj->withdraw(account,money);
57 */