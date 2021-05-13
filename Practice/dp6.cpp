#include <stdio.h>
#define M 3
#define N 3
int dp[50][50] = {0};
int countPaths(int m, int n)
{

    if (m == M - 1 || n == N - 1)
    {
        return 1;
    }
    if (dp[m][n] != 0)
    {
        return dp[m][n];
    }
    return dp[m][n] = countPaths(m + 1, n)    // move down
                      + countPaths(m, n + 1); // move right
}

int main(void)
{
    int k = countPaths(0, 0);
    printf("The total number of paths is %d", k);

    return 0;
}