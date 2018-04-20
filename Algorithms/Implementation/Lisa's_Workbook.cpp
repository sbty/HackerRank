#include <bits/stdc++.h>

using namespace std;

int workbook(int n, int k, vector <int> arr) {
    // Complete this function
    int p = 1;
    int cnt = 0;
   
    for(auto i = 0; i < arr.size(); i++) {
        
        int m = 1;
        while( m <= arr[i]){
            for(int j = 1; j <= k && m <= arr[i]; j++ ){
                if(m==p)
                    cnt++;
                m++;
            }
            p++;
        }
    }
    
    return cnt;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = workbook(n, k, arr);
    cout << result << endl;
    return 0;
}
