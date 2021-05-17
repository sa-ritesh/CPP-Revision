#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int k;
        cin >> k;
        int x = 100 - k;
        int large = max(x, k);
        int small = min(x, k);
        int g = gcd(large, small);

        while (g != 1)
        {
            large /= g;
            small /= g;
            g = gcd(small, large);
        }
        int ans = small + large;
        cout << ans << endl;
    }
}