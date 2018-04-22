#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the strangeCounter function below.
 */
long strangeCounter(long t) {
    /*
     * Write your code here.
     */
    long rem = 3;
    
    while(t > rem) {
        t = t-rem;
        rem *= 2;
    }

//    print(rem-t+1)
    
    return rem-t+1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    long t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = strangeCounter(t);

    fout << result << "\n";

    fout.close();

    return 0;
}
