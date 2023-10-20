#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>v(3, 0);
    cin>>v[0]>>v[1]>>v[2];
    sort(v.begin(), v.end());
    int ans = (v[1]-v[0]) + (v[2]-v[1]);
    cout<<ans<<endl;
    return 0;
}