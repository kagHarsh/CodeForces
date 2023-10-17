#include<iostream>
#include<string.h>
using namespace std;
#include<bits/stdc++.h>

int main()
{
    int input;
    cin >> input;
    string s;
    int x = 0;
    while (input--)
    {
        cin >> s;
        if(s[1] == '+')
        ++x;
        else
        x--;

    }
    cout << x << "\n";
    return 0;
    
}