#include <iostream>
using namespace std;
int minCoins(int n, int coins[], int t, int dp[])
{
    if (n == 0)
    {
        return 0;
    }
    if (dp[n] != 0)
    {
        return dp[n];
    }
    int ans = INT_MAX;
    for (int i = 0; i < t; i++)
    {
        if (n - coins[i] >= 0)
        {
            int subAns = minCoins(n - coins[i], coins, t, dp);
            ans = min(subAns + 1, ans);
        }
    }
    dp[n] = ans;
    return dp[n];
}
int main()
{
    int n;
    cin >> n;
    int coins[] = {1, 7, 10};
    int t = 3;
    int dp[100] = {0};
    cout << minCoins(n, coins, t, dp);
    cout << endl
         << t << endl;
}