#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the array2D function below.
 */
int array2D(vector<vector<int>> arr) {
    /*
     * Write your code here.
     */
    int max = -100;
    for(int y = 1; y < ( arr.size() -1 ); y++) {
        for(int x = 1; x < ( arr[0].size() -1 ); x ++) {
            int tmp = arr[y-1][x-1] + arr[y-1][x] + arr[y-1][x+1] +
                                      arr[y][x] +
                      arr[y+1][x-1] + arr[y+1][x] + arr[y+1][x+1];
            if(tmp > max) max = tmp;
                
        }
    }

    return max;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int arr_row_itr = 0; arr_row_itr < 6; arr_row_itr++) {
        arr[arr_row_itr].resize(6);

        for (int arr_column_itr = 0; arr_column_itr < 6; arr_column_itr++) {
            cin >> arr[arr_row_itr][arr_column_itr];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = array2D(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
