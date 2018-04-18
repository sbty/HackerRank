#include <bits/stdc++.h>

using namespace std;

string organizingContainers(vector < vector<int> > container) {
    // Complete this function
    vector<int> sum_row(container.size());
    vector<int> sum_col(container.size());
    
    for(int i = 0; i < (container.size() ); i++){
        for(int j = 0; j < container.size(); j++){
            sum_row[i] += container[i][j];
            sum_col[i] += container[j][i];
        }
    }

    string result;
    sort(sum_row.begin(), sum_row.end());
    sort(sum_col.begin(), sum_col.end());
    
    if(sum_col==sum_row)
        result = "Possible";
    else result = "Impossible";

    return result;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int n;
        cin >> n;
        vector< vector<int> > container(n,vector<int>(n));
        for(int container_i = 0;container_i < n;container_i++){
           for(int container_j = 0;container_j < n;container_j++){
              cin >> container[container_i][container_j];
           }
        }
        string result = organizingContainers(container);
        cout << result << endl;
    }
    return 0;
}
