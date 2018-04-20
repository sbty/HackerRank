#include <bits/stdc++.h>

using namespace std;

int flatlandSpaceStations(int n, vector <int> c) {
    // Complete this function
    

    vector<int> d(n);
    for(int p = 0; p < n; p++) {
        int dist = 1000000;
        for(auto i = c.begin(); i != c.end(); i++) {
            
            int tmp = abs(*i - p);
            
            if(tmp < dist ) dist = tmp;
            
//            cout << "p=" << p << " tmp=" << tmp << endl;
        }
        d.push_back(dist);
    }
    
    int result = *max_element(d.begin(), d.end());
    
    return result;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> c(m);
    for(int c_i = 0; c_i < m; c_i++){
       cin >> c[c_i];
    }
    int result = flatlandSpaceStations(n, c);
    cout << result << endl;
    return 0;
}
