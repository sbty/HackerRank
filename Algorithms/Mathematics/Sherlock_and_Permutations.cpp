#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the solve function below.

int k = 1000000007;

long long f(long long a)
{
    if(a<2)
        return 1;
    else
        return (a*f(a-1))%k;
}

long long modpow(long long base, long long exp, long long modulus) 
{
	base %= modulus;
	long long result = 1;
	
	while(exp > 0) 
	{
    	if(exp & 1) 
            result = (result * base) % modulus;
		
    	base = (base * base) % modulus;
    	exp >>= 1;
	}
	
	return result;
}

int main() 
{
    int t,n,m;
    cin >> t;
    
    while(t--)
    {
        cin >> n >> m;
        
        long long temp = (f(n)%k*f(m-1)%k)%k;
        temp = modpow(temp,k-2,k); //(f(n)*f(m-1))^(10000000007-2)
        
        long long result = (f(n+m-1.0)%k*temp%k)%k;
        
        cout << result << endl;
    }
    
    return 0;
}
