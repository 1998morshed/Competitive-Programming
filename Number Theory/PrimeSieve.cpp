#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
  if (n < 2) return false;
  for (int i = 2; i <= sqrt(n) + 1; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}


int main()
{
	
    int n; cin>>n;
    cout<<isPrime(n)<<endl;
}
