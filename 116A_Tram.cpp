#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<pair<int, int>>arr(n);
    for (int i = 0; i < n; i++) {
        cin>>arr[i].first>>arr[i].second;
    }
    int maxi = 0;
    int prev_val = 0;
    for (int i = 0; i < n; i++) {
        int val = (prev_val-arr[i].first) + arr[i].second;
        prev_val = val;
        maxi = max(maxi, prev_val);
    }
    cout<<maxi<<endl;
    return 0;
}