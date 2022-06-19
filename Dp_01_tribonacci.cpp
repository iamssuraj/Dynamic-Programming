#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)
long long int tribonacci(long long int n)
{
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return 1;
    vector<long long int> v(n + 1);
    v[0] = 0, v[1] = 1, v[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        v[i] = v[i - 1] + v[i - 2] + v[i - 3];
    }
    return v[n];
}
signed main()
{
    cout<<tribonacci(50)<<endl;
    return 0;
}