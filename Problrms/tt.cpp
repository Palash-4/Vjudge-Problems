#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (i > 0 && arr[i] > arr[i - 1]) {
            return 1;
        }
    }
    int k_s = arr[k - 1];
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] >= k_s && arr[i] > 0) {
            ++count;
        }
    }

    cout << count << endl;
    return 0;
}
