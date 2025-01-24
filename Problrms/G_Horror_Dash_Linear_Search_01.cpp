#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        int mx = 0;
        while (n--)
        {
            int x;
            cin >> x;
            mx = max(mx, x);
        }
        cout << "Case " << i << ": " << mx << endl;
    }
    return 0;
}