#include <bits/stdc++.h>

using namespace std;
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long unsigned r, c;
    cin >> r >> c;
    printf("%lu", 10*((r-1)/2)+((r-1)%2)+(c-1)*2);
    return 0;
}