#include <iostream>
using namespace std;
int count = 0;
int fib(int n, int *dp)
{
    if (n == 1)
    {
        return 0;
    }
    if (dp[n] != 0)
    {
        return dp[n];
    }
    int op1, op2, op3 = INT_MAX;

    if (n % 3 == 0)
    {
        op1 = fib(n / 3, dp) + 1;
    }
    else if (n % 2 == 0)
    {
        op2 = fib(n / 2, dp) + 1;
    }
    else
    {
        op3 = fib(n - 1, dp) + 1;
    }
    return dp[n] = min(op1, min(op2, op3));
}
int main()
{
    int n;
    cin >> n;
    int dp[n] = {0};
    cout << fib(n, dp);
}