#include <bits/stdc++.h>

using namespace std;

vector <int> serviceLane(int n, vector < vector<int> > cases) {
    // Complete this function
    vector<int> result;
    
    
    return result;
}

int main() {
    int n;
    int t;
    cin >> n >> t;
    vector<int> width(n);
    for(int width_i = 0; width_i < n; width_i++){
       cin >> width[width_i];
    }
    vector< vector<int> > cases(t,vector<int>(2));
    for(int cases_i = 0;cases_i < t;cases_i++){
       for(int cases_j = 0;cases_j < 2;cases_j++){
          cin >> cases[cases_i][cases_j];
       }
    }
    
//    vector<int> min;
    
    for(auto i = 0; i < t; i++) {
        int left = cases[i][0];
        int right = cases[i][1];
        int min = 100;
       // cout << left << " " << right << endl;
        for(int j = left; j <= right; j++) {
            
            int tmp = width[j];
            //cout << tmp;
            if(tmp < min)
                min = tmp;
        }
        
        cout << min << endl;
        
    }
       
    vector <int> result = serviceLane(n, cases);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}
