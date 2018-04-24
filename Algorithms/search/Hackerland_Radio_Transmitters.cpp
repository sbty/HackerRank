#include <bits/stdc++.h>

using namespace std;

int hackerlandRadioTransmitters(vector <int> x, int k) {
    // Complete this function
    int result = 0;
    int n = x.size();
    sort(x.begin(), x.end());
    int i = 0;
    
    
    while(n > i) {
        int j = i+1;
        while(x[i]+k >= x[j] && n > j) {
            j++;
        }
        i = j;
        j--;
        while(x[j]+k >= x[i] && n > i ) {
            i++;
        }
        result++;
        
    }
    
          
        
    return result;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> x(n);
    for(int x_i = 0; x_i < n; x_i++){
       cin >> x[x_i];
    }
    int result = hackerlandRadioTransmitters(x, k);
    cout << result << endl;
    return 0;
}
