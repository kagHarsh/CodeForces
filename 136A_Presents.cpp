#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    vector<int>ans(n, 0);
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++) {
        ans[arr[i]-1] = i+1;
    }
    for (int i = 0; i < n; i++) {
        cout<<ans[i]<<" ";
    }
    return 0;
}