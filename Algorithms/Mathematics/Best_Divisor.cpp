#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int solve(int n)
{
    int sum=0;
    while(n>=1)
    {
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}   

int main() {
    
    int n;cin>>n;
    int sum,ans,maxi=0;
    for(int i=1;i<=n;++i)
    {
        if(n%i==0)
        {
            sum=solve(i);
            if(maxi<sum)
            {
                maxi=sum;ans=i;
            }
            if(maxi==sum)
            { ans=min(i,ans);}
        }
    }
    cout<<ans<<endl;
}