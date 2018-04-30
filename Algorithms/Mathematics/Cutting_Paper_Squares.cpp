#include <bits/stdc++.h>

using namespace std;

long long solve(int n, int m){
    // Complete this function
    long long int nn, mm;
    nn = n;
    mm = m;
    
    return mm*nn-1;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    long long result = solve(n, m);
    cout << result << endl;
    return 0;
}
