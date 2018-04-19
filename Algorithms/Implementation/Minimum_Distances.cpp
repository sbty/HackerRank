#include <bits/stdc++.h>

using namespace std;

int minimumDistances(vector <int> a) {
    // Complete this function
    int dist = -1;
    int last = a.size();
    for(auto i = a.begin(); i <  a.end(); i++) {
        int tmp = 0;
        auto c = find(i+1, a.end(), *i);
        if(c != a.end()) {
            tmp = distance(i, c);
//            if(tmp > dist) dist = tmp;
            if(last > tmp )
                last = tmp;
        }
            
    }
    
    last == a.size() ? dist = -1 : dist = last;
    return dist;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    int result = minimumDistances(a);
    cout << result << endl;
    return 0;
}
