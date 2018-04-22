#include <bits/stdc++.h>

using namespace std;

int surfaceArea(vector < vector<int> > A) {
    // Complete this function
    int h = A.size();
    int w = A.front().size();
    
    int area = h*w*2;
    
    int left,right, top, down;
    
    for(auto i = 0; i < h; i++ ) {
        for(auto j = 0; j < w; j++ ) {
            left  = (j == 0)   ? 0 : A[i][j-1];
            right = (j == w-1) ? 0 : A[i][j+1];
            top   = (i == 0)   ? 0 : A[i-1][j];
            down  = (i == h-1) ? 0 : A[i+1][j];
            
            area += max(0, A[i][j] - left);
            area += max(0, A[i][j] - right);
            area += max(0, A[i][j] - top);
            area += max(0, A[i][j] - down);
       }
    }
    return area;
}

int main() {
    int H;
    int W;
    cin >> H >> W;
    vector< vector<int> > A(H,vector<int>(W));
    for(int A_i = 0;A_i < H;A_i++){
       for(int A_j = 0;A_j < W;A_j++){
          cin >> A[A_i][A_j];
       }
    }
    int result = surfaceArea(A);
    cout << result << endl;
    return 0;
}
