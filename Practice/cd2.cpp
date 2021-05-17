#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        bool c = true;
        for (int i = 1; i <= n; i++)
        {
            if (i != a[i])
            {
                c = false;
            }
        }
        if (c)
        {
            cout << "0" << endl;
        }
        else
        {
            if (a[1] == 1 || a[n] == n)
            {
                cout << "1" << endl;
            }
            else if (a[1] == n || a[n] == 1)
            {
                if (a[1] == n && a[n] == 1)
                {
                    cout << "3" << endl;
                }
                else
                {
                    cout << "2" << endl;
                }
            }
            else
            {
                cout << "2" << endl;
            }
        }
    }
}