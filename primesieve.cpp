#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//Sieve Approach - Generate a array containing prime Numbers
void prime_sieve(ll *p,int n) {
	//first mark all odd number's prime
	for (ll i = 3; i <= n; i += 2) {
		p[i] = 1;
	}
	// Sieve
	for (ll i = 3; i*i <= n; i += 2) {
		//if the current number is not marked (it is prime)
		if (p[i] == 1) {
			//mark all the multiples of i as not prime
			for (ll j = i * i; j <= n; j = j + i ) {
				p[j] = 0;
			}
		}
	}
	//special case
	p[2] = 1;
	p[1] = p[0] = 0;
	return ;
}
int main() {
	ll n;
	cin >> n;
	ll p[n+1] = {0};
	prime_sieve(p,n);
	//lets print primes upto range n
	for (ll i = 2; i <= n; i++) {
		if (p[i] == 1) {
			cout << i << " ";
		}
	}
	return 0;
}
