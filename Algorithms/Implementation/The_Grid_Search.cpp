#include <bits/stdc++.h>

using namespace std;

string gridSearch(vector <string> G, vector <string> P) {
    // Complete this function
    int R = G.size();
    int C = G.front().size();
    int r = P.size();
    int c = P.front().size();

    string result;
    
    size_t slength = P.front().length();
    
    int found=0;
    
    for(int i=0;i<=R-r;i++) {
        for(int j=0;j<=C-c;j++) {
           int p=0,k=i;
            while(G[k].substr(j,c)==P[p].substr(0,c)) {
                if(k-i+1==r) {
                    found=1;
                    break;
                }
                k++,p++;
            }
        }
    }
    (found)? result = "YES" : result = "NO";
    return result;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int R;
        int C;
        cin >> R >> C;
        vector<string> G(R);
        for(int G_i = 0; G_i < R; G_i++){
           cin >> G[G_i];
        }
        int r;
        int c;
        cin >> r >> c;
        vector<string> P(r);
        for(int P_i = 0; P_i < r; P_i++){
           cin >> P[P_i];
        }
        string result = gridSearch(G, P);
        cout << result << endl;
    }
    return 0;
}
