#include <bits/stdc++.h>

using namespace std;

vector <string> cavityMap(vector <string> grid) {
    // Complete this function
    int n = grid.size();

    for(int y = 1; y< (n - 1); y++) {
        for(int x = 1; x < (n - 1) ; x++) {
            if(grid[y][x] - 48 > grid[y-1][x] - 48  &&
               grid[y][x] - 48 > grid[y+1][x] - 48  &&
               grid[y][x] - 48 > grid[y][x+1] - 48  &&
               grid[y][x] - 48 > grid[y][x-1] - 48 
              ){
                grid[y][x] = 'X';
            }
        }
    }
        
    return grid;
}

int main() {
    int n;
    cin >> n;
    vector<string> grid(n);
    for(int grid_i = 0; grid_i < n; grid_i++){
       cin >> grid[grid_i];
    }
    vector <string> result = cavityMap(grid);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}
