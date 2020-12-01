#include<bits/stdc++.h>
using namespace std;

vector<int> prime;
bool p[90000005];
int mx = 90000000;

void sieve() 
{

	  p[0] = p[1] = true;
	  for (int i = 2; i*i<=mx; i++) 
	  {
	    if (!p[i]) 
	    {
	    	for(int j=i*i; j<=mx; j+=i)
	      	p[j] = true;
	    }
	  }
	  for (int i = 2; i <= mx; i++)
	  {
	  	if(!p[i])
	  		prime.push_back(i);

  	  }
}


int main()
{
	int t, n; 
	cin>>t;
	sieve();

	while(t--)
	{
		cin>>n;
		cout<<prime[n-1]<<endl;
	}
    
    return 0;
}
