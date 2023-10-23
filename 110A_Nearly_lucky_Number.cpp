#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin>>n;
    long long int cnt = 0;
    while (n > 0) {
        int val = n%10;
        n = n/10;
        if (val == 7 || val == 4) {
            cnt++;
            // if (cnt > 7) {
            //     //cout<<"NO"<<endl;
            //     break;
            // }
        }
    }
    cout<<cnt<<endl;
    if (cnt == 7 || cnt == 4) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    return 0;
}