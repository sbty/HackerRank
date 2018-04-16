#include <bits/stdc++.h>

using namespace std;

int jumpingOnClouds(vector <int> c) {
    // Complete this function
    int jump = 0;
    //for(auto i = c.begin(); i != c.end() -1 ;) {
    for(auto i = 0; i < (c.size() - 1) ;) {
        //*(i+2) ? ( i+=1, jump++) : (i+=2, jump++);
        c[i+2] ? ( i+=1, jump++) : (i+=2, jump++);
        
    }
    return jump;
        
}

int main() {
    int n;
    cin >> n;
    vector<int> c(n);
    for(int c_i = 0; c_i < n; c_i++){
       cin >> c[c_i];
    }
    int result = jumpingOnClouds(c);
    cout << result << endl;
    return 0;
}
