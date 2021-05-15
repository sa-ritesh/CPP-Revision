#include <iostream>
using namespace std;
bool rat(char in[1000][1000], int out[1000][1000], int i, int j, int m, int n)
{
    if (i == m && j == n)
    {
        out[m][n] = 1;
        for (int i = 0; i <= m; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                cout << out[i][j] << " ";
            }
            cout << endl;
        }
        exit(0);
    }
    if (i > m || j > n)
    {
        return false;
    }
    if (in[i][j] == 'X')
    {
        return false;
    }
    out[i][j] = 1;
    bool rs = rat(in, out, i, j + 1, m, n);
    bool ds = rat(in, out, i + 1, j, m, n);
    if (ds && rs)
    {
        return true;
    }
    else
    {
        out[i][j] = 0;

        return false;
    }
}
int main()
{
    int m, n;
    cin >> m >> n;
    char in[1000][1000] = {0};
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> in[i][j];
        }
    }
    int out[1000][1000] = {0};
    bool ans = rat(in, out, 0, 0, m - 1, n - 1);
    if (ans != true)
    {
        cout << "-1";
    }
    return 0;
}