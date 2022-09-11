#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000

int main()
{
    int n, mask = 0, ans = 0;
    cin>>n;
    int m = n;

    if(n==0) return 1;
    
    while(m!=0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    ans = (~n) & mask;
    cout<<ans<<endl;

    return 0;
}