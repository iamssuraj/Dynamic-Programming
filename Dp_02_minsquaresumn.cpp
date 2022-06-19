// top-down

#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)

const int N = 1e5 + 2, MOD = 1e9 + 7;

int dp[N];

int MinSquare(int n)
{
    if (n <= 3)
        return n;
    if (dp[n] != MOD)
        return dp[n];
    for (int i = 1; i * i <= n; i++)
    {
        dp[n] = min(dp[n], MinSquare(n - i * i) + 1);
    }
    return dp[n];
}
signed main()
{
    // minimum number of squares whose sum equals n
    // Example :
    // 26 = 4^2 + 3^2 + 1^2
    // 26 = 5^2 + 1^2
    // min numbers = 2

    // Base case :
    // f(0) = 0
    // f(1) = 1 (1^2)
    // f(2) = 2 (1^2) + (1^2)
    // f(3) = 3 (1^2) + (1^2) + (1^2)
    // recurrence relation --> optimal substructure

    rep(i, 0, N)
        dp[i] = MOD;

    int n;
    cin >> n;

    cout << MinSquare(n) << endl;

    return 0;
}