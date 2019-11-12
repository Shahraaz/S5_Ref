#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef double db;
typedef vector <ll> vll;
typedef pair <ll, ll> pll;
#define pb push_back
#define mp make_pair
#define MAX 1000000
#define mod 1000000007
#define all(_) _.begin(), _.end()
#define F first
#define S second
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
ll getmask(string s)
{
	ll mask = 0;
	for(auto x: s)
		mask |= (1 << (x - 'a'));
	return mask;
}
int main()
{
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	ll t;
	cin >> t;
	while(t--)
	{
		string s;
		ll mask = 0, n, k, i;
		vll m(1 << 20, 0);
		cin >> n >> k >> s;
		ll N = 20;
		vll F(1 << 20, 0);
		for(i = 0; i < k; i++)
		{
			string temp;
			cin >> temp;
			m[getmask(temp)] = F[getmask(temp)] = i + 1;
		}
		for(int i = 0;i < N; ++i) for(int mask = (1 << N) - 1; mask >= 0; --mask){
			if((mask & (1<<i)) == 0)
				F[mask] = max(F[mask], F[mask^(1<<i)]);
		}
		i = 0, mask = 0;
		vll ans(n, 0);
		while(i < n)
		{
			ll j = i;
			// cout << i << ' ' << j << endl;
			while(j < n)
			{
				mask |= (1 << (s[j] - 'a'));
				if(!F[mask])
				{
					mask -= (1 << (s[j] - 'a'));
					break;
				}
				j++;
			}
			for(; i < j; i++)
				ans[i] = F[mask];
			mask = 0;
		}
		for(auto x: ans)
			cout << x << ' ';
		cout << endl;
	}
	return 0;
}