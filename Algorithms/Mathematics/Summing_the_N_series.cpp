#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the summingSeries function below.
 */
long summingSeries(long n) {
    /*
     * Write your code here.
     */
    //int s = 2*n - 1;
    
    //long long int ret = ((1+s)*n)/2 % 10000000007 ;
    long ret = (n % 1000000007) * (n % 1000000007) % 1000000007;

    return ret;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        long n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        long result = summingSeries(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
