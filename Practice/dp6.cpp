#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int li = 0; li < n; li++)
    {
        for (int lj = 0; lj < m; lj++)
        {
            for (int bi = li; bi < n; bi++)
            {
                for (int bj = lj; bj < m; bj++)
                {
                    for (int i = li; i <= bi; i++)
                    {
                        for (int j = lj; j <= bj; j++)
                        {
                            cout << arr[i][j] << " ";
                        }
                    }
                    cout << endl;
                }
            }
        }
    }
}