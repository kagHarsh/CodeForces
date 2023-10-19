#include <bits/stdc++.h>
using namespace std;

int main() {
    int mat[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin>>mat[i][j];
        }
        //cout<<endl;
    }
    int r = 0;
    int c = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (mat[i][j] == 1) {
                r = abs(2-i);
                c = abs(2-j);
                break;
            }
        }
    }
    cout<<(r+c)<<endl;
    return 0;
}