#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int mini = INT_MAX;
    int min_idx;
    int maxi = INT_MIN;
    int max_idx;
    for (int i = 0; i < n; i++) {
        if (arr[i] <= mini) {
            mini = arr[i];
            min_idx = i;
        }
    }
    for(int i = 0; i < n; i++) {
        if (arr[i] > maxi) {
            maxi = arr[i];
            max_idx = i;
        }
    }
    int ans = abs(min_idx-(n-1)) + max_idx;
    if (min_idx < max_idx) {
        ans = ans-1;
    }
    cout<<ans<<endl;
    return 0;
}