#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the divisors function below.
 */
int divisors(int n) {
    /*
     * Write your code here.
     */
    int num = 2;
    int cnt = 0;
    while(n >= num) {
        if( (n % num) == 0) {
            cnt++;
        }
        num += 2;
            
    }

    return cnt;

}

int main()
{
   // ofstream fout(getenv("OUTPUT_PATH"));

    int t,n;
    cin >> t;
    
    while(t--)
    {
        cin >> n;
        
        int count = 0;
        int sqr = sqrt(n);
        for(int i=1;i<=sqr;i++)
        {
            if(n%i==0)
            {
                if(i%2==0)
                    count++;
                
                if(i!=n/i && (n/i)%2==0)
                    count++;
            }
        }
        
        cout << count << endl;
    }
    

  //  fout.close();

    return 0;
}
