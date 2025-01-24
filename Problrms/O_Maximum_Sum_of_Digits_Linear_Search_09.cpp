#include <bits/stdc++.h>
using namespace std;

bool isluckey(int n)
{
    while (n > 0)
    {
        int d = n % 10;
        if (d != 4 && d != 7)
        {
            return false;
        }
        n = n / 10;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    vector<int> ln;
    for (int i = 1; i <= 1000; ++i)
    {
        if (isluckey(i))
            ln.push_back(i);
    }
    bool isln = false;
    for (int l : ln)
    {
        if (n % l == 0)
        {
            isln = true;
            break;
        }
    }
    if (isln)
        cout << "YES" << endl;
    else
        cout << "NO";

    return 0;
}