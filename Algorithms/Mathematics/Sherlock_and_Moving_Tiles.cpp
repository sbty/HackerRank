#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

/*
 * Complete the movingTiles function below.
 */
vector<double> movingTiles(int l, int s1, int s2, vector<int> queries) {
    /*
     * Write your code here.
     */
    vector<double> ret;
    for(auto elem: queries) {
        double d = l * sqrt(2);
        double ll = sqrt(elem) * sqrt(2);
        double ans = (d - ll)/fabs(s2-s1);
        ret.push_back(ans);


    }

    return ret;
}

int main()
{
    int L, s1, s2, Q;
    cin >> L >> s1 >> s2 >> Q;

    vector<long> queries(Q);
    for (int i=0;i<Q;i++) cin >> queries[i];
    
    double com=sqrt(2)/abs(s2-s1);
    for (int i=0;i<Q;i++) printf("%.20f\n",com*(L-sqrt(queries[i])));    
    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
