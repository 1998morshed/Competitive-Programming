#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000

int main()
{
    int n, ans=0, digit;
    cin>>n;
    int i = 0;
    while(n!=0)
    {
        digit = n & 1;
        n = n>>1;
        ans = (digit*pow(10,i)+ans);
        i++;

    }
    cout<<ans<<endl;

    return 0;
}