#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int x;
    cin>>x;
  
    long long int cnt = 1;
    long long int ans = 0;
    while (x > 0) {
        int n = x%10;
        x = x/10;
        if (x == 0 && n == 9) {
            ans = cnt*n + ans;
            cnt = cnt*10;
        }
        else if (n > 4) {
            n = 9-n;
            ans = cnt*n + ans;
            cnt = cnt*10;
        } 
        else if (n <= 4) {
            ans = cnt*n + ans;
            cnt = cnt*10;
        }
    }
    cout<<ans<<endl;
    return 0;
}