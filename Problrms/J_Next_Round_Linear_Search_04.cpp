#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, cnt = 0;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int k_pos = arr[k - 1];
        if (arr[i] >= k_pos && arr[i] > 0)
        {
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}