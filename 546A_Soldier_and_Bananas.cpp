#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int k, n, w;
    cin>>k>>w>>n;
    long long int val = (k*n*(n+1))/2;
    if (val > w) {
        cout<<(val-w)<<endl;
    } else {
        cout<<0;
    }
    return 0;
}