#include <iostream>
using namespace std;
int dp[100] = {0};
int steps(int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (dp[n] != 0)
    {
        return dp[n];
    }
    int op1, op2, op3;
    op1 = op2 = op3 = INT_MAX;
    if (n % 3 == 0)
    {
        op1 = (steps(n / 3)) + 1;
    }
    else if (n % 2 == 0)
    {
        op2 = steps(n / 2) + 1;
    }
    else
    {
        op3 = steps(n - 1) + 1;
    }
    int ans = min(op1, min(op2, op3));
    return dp[n] = ans;
}
int main()
{
    int n;
    cin >> n;
    cout << steps(n);
    return 0;
}