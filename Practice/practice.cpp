#include <iostream>
using namespace std;
int fib(int n, int *dp)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    if (dp[n] != 0)
    {
        return dp[n];
    }
    return dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
}
int main()
{
    int n;
    cin >> n;
    int dp[n] = {0};
    cout << fib(n, dp);
}