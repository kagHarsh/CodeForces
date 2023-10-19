#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main() {
	// your code goes here
	int t;
	int x, y, k;
	while (t--) {
	    
	    cin>>x>>y>>k;
	    int sum = 0;
	    int ans = INT_MAX;;
	    while (k--) {
	        sum = x+y;
	        ans = min(sum, ans);
	        int val1 = __gcd(x, y);
    	    if (x > y) {
    	        if (val1 <= x) {
        	        x = val1;
        	        //sum += val1;
        	        sum = x+y;
        	        ans = min(ans, sum);
        	    }
    	    } else {
    	        if (val1 <= y) {
    	            y = val1;
    	            //sum += val1;
    	            sum = x+y;
        	        ans = min(ans, sum);
    	        }
    	    }
    	    int val2 = (x*y)/val1;
    	    if (x > y) {
    	        if (val2 <= x) {
        	        x = val2;
        	        //sum += val1;
        	        sum = x+y;
        	        ans = min(ans, sum);
        	    }
    	    } else {
    	        if (val2 <= y) {
    	            y = val2;
    	            //sum += val1;
    	            sum = x+y;
        	        ans = min(ans, sum);
    	        }
    	    }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
