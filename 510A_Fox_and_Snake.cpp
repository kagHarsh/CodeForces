#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    vector<vector<char>>mat(n, vector<char>(m, '.'));
    bool flag = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i%2 == 0) {
                mat[i][j] = '#';
            }
            else {
                if (flag == false) {
                    flag = true;
                    mat[i][m-1] = '#';
                    break;
                }
                else {
                    flag = false;
                    mat[i][0] = '#';
                    break;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout<<mat[i][j];
        }
        cout<<endl;
    }
    return 0;
}