#include <iostream>
using namespace std;
int dp[100] = {0};
int ans(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    if (dp[n] != 0)
    {
        return dp[n];
    }
    return dp[n] = ans(n - 1) + (n - 1) * ans(n - 2) + 1;
}
int main()
{
    int n;
    cin >> n;
    cout << ans(n);
}