#include <bits/stdc++.h>

using namespace std;

vector <int> acmTeam(int n, int m, vector <string> topic) {
    // Complete this function
    vector<int> result(2);
//    int cnt = 0;
    int high = -1;
//    int max_p = 0;
    int pair = 0;
    
    for(int i = 0; i < (n - 1) ; i++) {
        for(int j = i; j < n; j++) {
            int cnt = 0;
            for(int k = 0; k < m; k++) {
                if( topic[i][k] == '1' || topic[j][k] == '1' )
                    cnt++;
            }

            if(cnt > high) {
                high = cnt;
                pair = 1;
            } else if(cnt == high ) {
                pair++;
            }
        }
    }
    
    result[0] = high;
    result[1] = pair;
    
    return result;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<string> topic(n);
    for(int topic_i = 0; topic_i < n; topic_i++){
       cin >> topic[topic_i];
    }
    vector <int> result = acmTeam(n, m, topic);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}
