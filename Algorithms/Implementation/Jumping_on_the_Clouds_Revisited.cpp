#include <bits/stdc++.h>

using namespace std;

int jumpingOnClouds(vector <int> c, int k) {
    // Complete this function
    int energy = 100;
    
    int pos = 0;
    bool goal =false;
    while( !goal ) {
        pos = pos + k;
        if( pos > c.size() - 1 ) {
            pos = 0;
            goal = true;
        }
        energy = energy - ( (c[pos] *2) + 1 );
    }
    
    return energy;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> c(n);
    for(int c_i = 0; c_i < n; c_i++){
       cin >> c[c_i];
    }
    int result = jumpingOnClouds(c, k);
    cout << result << endl;
    return 0;
}
