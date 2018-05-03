#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i=0;i<t;i++) {
        int n, result=2;
        cin >> n;
        for (int i=2;i<=n;i++) result = (result*2)%100000;
        cout << --result << "\n";
    }
    return 0;
}