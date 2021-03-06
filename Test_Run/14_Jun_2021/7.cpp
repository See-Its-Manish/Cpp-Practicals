//Link   - https://www.codechef.com/JUNE21C/problems/OPTSET
//Author - seeitsmanish
#include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// #include<ext/pb_ds/trie_policy.hpp>
// using namespace __gnu_pbds;
using namespace std;
#define ff          			first
#define ss						second
#define pb						emplace_back
#define ll						long long int
#define ld						long double
#define mod             		1000000007
#define vi  					vector<ll>
#define vii						vector<ll,ll>
#define vs						vector<>string>
#define pii 					pair<ll,ll>
#define mii						map<ll,ll>
#define ump						unordered_map<ll>
#define mp 						make_pair
#define pq_map                  priority_queue<ll>
#define pq_min      			priority_queue<ll,vi,greater<ll>>
#define endl        			"\n"
#define flush       			cin.get()
#define all(v)      			v.begin(), v.end()
#define print(v)    			for(auto &n:v) cout<<n<<" "; cout<<endl
#define printpair(v)			for(auto &it:v) cout<<it.ff<<" "<<it.ss<<endl; cout<<"Ended"<<endl;
#define loop(i,s,e) 			for(auto i=s; i<=e; ++i)
#define mem(var,val)			memset(var,val,sizeof(var))
#define log(args...)			{ string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
int max(int a, int b) {return a > b ? a : b;}
int min(int a, int b) {return a > b ? b : a;}
int __gcd(int a, int b) {return b == 0 ? a : __gcd(b, a % b);}
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
	cout << *it << " = " << a << endl;
	err(++it, args...);
}
void FIO() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
// typedef trie<string, null_type, trie_string_access_traits<>, pat_trie_tag, trie_prefix_search_node_update> pbtrie;

// int maxXorSum(int n, int k)
// {
// 	if (k == 1)
// 		return n;

// 	int res = 1;
// 	while (res <= n)
// 		res <<= 1;
// 	return res - 1;
// }

int maxXor(int n, int k) {
	if (k == 1)
		return n;
	int result = 1;
	while (result <= n)
		result <<= 1;
	return result - 1;
}
void get_max_XOR(int n , int k , vi &xor_sequence)
{
	// if (k == 1) return vi{n};
	if (k == 1)
	{
		cout << "Value:" << n << endl;
		xor_sequence.pb(n);
		return;
	}
	int dp[n + 1][k + 1];
	loop(i, 0, n) dp[i][0] = 0;
	loop(i, 1, k) dp[0][i] = -1;
	// loop(i, 1, n) dp[i][1] = i;
	// loop(i, 1, k) dp[1][i] = INT_MIN;
	// vi xor_sequence;
	loop(i, 1, n)
	{
		loop(j, 1, k)
		{
			dp[i][j] = max(i ^ dp[i - 1][j - 1], dp[i - 1][j]);
		}
		// if ((i ^ dp[i - 1][j - 1]) > dp[i - 1][j]) xor_sequence.pb(i);
	}



	// loop(i, 0, n)
	// {
	// 	loop(j, 0, k)
	// 	{
	// 		cout << dp[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	// return dp[n][k];

	int i = n;
	int j = k;

	while (i > 0 && j > 0)
	{
		if ((i ^ dp[i - 1][j - 1]) > dp[i - 1][j])
		{
			xor_sequence.pb(i);
			i--; j--;
		}

		else
		{
			i--;
		}

	}
	cout << "Value:" << dp[n][k] << endl;
	reverse(all(xor_sequence));
}

int main() {
	FIO();

	// Code Starts from here!

	// ll n;
	// cin >> n;
	// loop(i, 0, n - 1)
	// {
	// 	ll a, b;
	// 	cin >> a >> b;
	// 	cout << getmaxxor(a, b) << endl;
	// }

	// vi ans;
	// // cout << (1 ^ -1) << endl;

	// ans = get_max_XOR(8, 7);
	// print(ans);

	// ans = get_max_XOR(10, 1);
	// print(ans);
	// ans = get_max_XOR(9, 2);
	// print(ans);
	// loop(i, 1, 16)
	// {
	// 	vi xor_sequence;
	// 	get_max_XOR(16, i, xor_sequence);
	// 	print(xor_sequence);
	// }
	// int t;
	// cin >> t;
	// while (t--)
	// {
	// 	int n, k;
	// 	cin >> n >> k;
	// 	vi xor_sequence;
	// 	get_max_XOR(n, k, xor_sequence);
	// 	print(xor_sequence);

	// }

	// loop(i, 1, 20)
	// {
	// 	loop(j, 1, i)
	// 	{
	// 		vi ans;

	// 		cout << "For (i,j) = " << "(" << i << ", " << j << ")" << endl;
	// 		// cout << "Right Answer:" << maxXorSum(i, j) << endl;
	// 		get_max_XOR(i, j, ans);
	// 		print(ans);
	// 	}
	// }

	vi ans;
	get_max_XOR(15, 5, ans);
	print(ans);
	// cout << (1 ^ 2 ^ 3) << endl;
	return 0;
}



