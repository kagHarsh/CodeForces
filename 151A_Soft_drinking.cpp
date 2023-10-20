#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    long long int drink = k*l;
    long long int val1 = drink/(nl*n);
    long long int val2 = (c*d)/n;
    long long int val3 = p/(n*np);
    long long int ans = min(val1, val2);
    ans = min(ans, val3);
    cout<<ans<<endl;
    return 0;
}