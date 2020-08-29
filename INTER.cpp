#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("fast-math")
#pragma GCC optimize("trapv")
#pragma GCC target("sse4")

#include<bits/stdc++.h>
#include<iomanip>
#define inf  (int)1e18
#define EPS   1e-9
#define mod 1000000007
#define all(k) sort(k.begin(),k.end())
#define Pi 3.14159
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)
#define repk(i,a,n) for(int i=a;i<=(n);i++)
#define ll unsigned long long
#define pb push_back
#define ppb pop_back
#define eb emplace_back
#define mp make_pair
#define F first
#define S second
#define pi pair<int,int>
#define pl pair<ll,ll>
#define vc vector<char>
#define vl vector<ll>
#define mi map<int,int>
#define ml map<ll,ll>
#define umap unordered_map<ll,int>
using namespace std;

ll int togglebit(ll int n)
{
	if (n == 0)
		return 1;


	ll int i = n;

	n |= n >> 1;


	n |= n >> 2;
	n |= n >> 4;
	n |= n >> 8;
	n |= n >> 16;

	return i ^ n;
}
int Dcod(string dig, int n)
{

	int count[n + 1];
	count[0] = 1;
	count[1] = 1;
	if (dig[0] == '0')
		return 0;
	for (int i = 2; i <= n; i++)
	{
		count[i] = 0;


		if (dig[i - 1] > '0')
			count[i] = count[i - 1] % mod;


		if (dig[i - 2] == '1' ||
		        (dig[i - 2] == '2' && dig[i - 1] < '7') )
			count[i] = (count[i] % mod + count[i - 2] % mod) % mod;
	}
	return count[n] % mod;
}

void sol() {
	string s;
	cin >> s;
	int n = s.size();
	cout << Dcod(s, n) << '\n';

}
int main() {


	int t = 1;
	cin >> t;

	for (int i = 0; i < t; ++i)
		sol();


	return 0;
}