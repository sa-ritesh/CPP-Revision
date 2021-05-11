#include <iostream>
using namespace std;
int dp[100] = {0};
int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    if (dp[n] != 0)
    {
        return dp[n];
    }
    int ans = fib(n - 1) + fib(n - 2);
    return dp[n] = ans;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cout << fib(i) << " ";
    }
}