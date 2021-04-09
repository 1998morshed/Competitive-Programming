#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 100005
ll A[N];
ll CA[N];

ll phi(ll n) {
    ll result = n;
    
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}
int main()
{
    for(ll i=1;i<=N;i++) A[i] = phi(i);
    
    for(ll i=2;i<=N;i++) A[i] = A[i] + A[i-1];

    ll t;
    cin>>t;
    ll n,res=0;
    for(ll i=1;i<=t;i++)
    {
        
        cin>>n;
        res = (n*(n+1))/2;

        cout<<"Case "<<i<<": "<<res-A[n]<<endl;
        //cout<<res<<" "<<A[n]<<endl;
    }

    //cout<<A[1]<<" "<<A[2]<<" "<<A[3]<<endl;
    
    return 0;
}

