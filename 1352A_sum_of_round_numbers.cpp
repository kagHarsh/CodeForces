#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int cnt = 1;
        vector<int>ans;
        while (n > 0) {
            int digit = n%10;
            if (digit == 0) {
                cnt = cnt*10;
                n = n/10;
                continue;
            }
            int val = digit*cnt;
            cnt = cnt*10;
            ans.push_back(val);
            n = n/10; 
        }
        cout<<ans.size()<<endl;
        for (int i = 0; i < ans.size(); i++) {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}