#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000005

int Exponent(ll n, ll a)
{
	ll res = 1;
	while(n)
	{
		if(n%2!=0)
		{
			res= (res*a)%mod; n-=1;
		}
		else
		{
			a=(a*a)%mod; n/=2;
		}
	}
	return res;
}


int main()
{
	ll n,a;
	cin>>a>>n;
	cout<<Exponent(n,a)<<endl;

	return 0;
}

//Complexity: Log(n)