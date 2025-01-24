#include <bits/stdc++.h>
using namespace std;
int long_le(const string &d)
{
    int mx_len = 0, cur_len = 1;
    for (size_t i = 1; i < d.length(); ++i)
    {
        if (d[i] == d[i - 1])
        {
            cur_len++;
        }
        else
        {
            mx_len = max(mx_len, cur_len);
            cur_len = 1;
        }
    }
    return mx_len = max(mx_len, cur_len);
}

int main()
{
    string s;
    cin >> s;
    cout << long_le(s) << endl;
    return 0;
}
