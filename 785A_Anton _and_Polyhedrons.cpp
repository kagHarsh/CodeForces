#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int sum = 0;
    while (n--) {
        string figure = "";
        cin>>figure;
        if (figure == "Tetrahedron") {
            sum += 4;
        }
        else if (figure == "Cube") {
            sum += 6;
        }
        else if (figure == "Octahedron") {
            sum += 8;
        }
        else if (figure == "Dodecahedron") {
            sum += 12;
        }
        else if (figure == "Icosahedron") {
            sum += 20;
        }
    }
    cout<<sum<<endl;
    return 0;
}