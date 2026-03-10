class Solution {
public:
const int MOD = 1e9+7;
vector<long long> fact, invfact;

long long modpow(long long a, long long e) {
long long res = 1;
while (e) {
if (e & 1) res = res * a % MOD;
a = a * a % MOD;
e >>= 1;
}
return res;

}

void precompute(int n) {
fact.resize(n+1);
invfact.resize(n+1);
fact[0] = 1;
for (int i = 1; i <= n; i++) fact[i] = fact[i-1] * i % MOD;
invfact[n] = modpow(fact[n], MOD-2);
for (int i = n-1; i >= 0; i--) invfact[i] = invfact[i+1] * (i+1) % MOD;
}

long long C(int n, int k) {
if (k < 0 || k > n) return 0;
return fact[n] * invfact[k] % MOD * invfact[n-k] % MOD;
}

long long comp(int n, int k, int limit) {
if (k == 0) return (n == 0) ? 1 : 0;

if (n < k) return 0;
if (n > k * limit) return 0; // optional optimization
long long res = 0;
int maxj = (n - k) / limit;
for (int j = 0; j <= maxj; j++) {
long long sign = (j % 2 == 0) ? 1 : -1;
long long term = C(k, j) * C(n - j * limit - 1, k - 1) % MOD;
if (sign == -1) term = MOD - term;
res = (res + term) % MOD;
}
return res;
}

int numberOfStableArrays(int zero, int one, int limit) {
if (zero == 0 && one == 0) return 1;
if (zero == 0) return (one <= limit) ? 1 : 0;
if (one == 0) return (zero <= limit) ? 1 : 0;
int maxN = max(zero, one);
precompute(maxN + 5); // +5 to be safe
long long ans = 0;
// start with 0
for (int b = 1; b <= one; b++) {
int a = b;
if (a <= zero) {
ans = (ans + comp(zero, a, limit) * comp(one, b, limit)) % MOD;
}
a = b + 1;
if (a <= zero) {
ans = (ans + comp(zero, a, limit) * comp(one, b, limit)) % MOD;
}
}
// start with 1
for (int a = 1; a <= zero; a++) {
int b = a;
if (b <= one) {
ans = (ans + comp(zero, a, limit) * comp(one, b, limit)) % MOD;
}
b = a + 1;
if (b <= one) {
ans = (ans + comp(zero, a, limit) * comp(one, b, limit)) % MOD;
}
}
return ans % MOD;
}
};