//LINK : https://www.codechef.com/WCE22021/problems/WCE0002
#include<bits/stdc++.h>
using namespace std;

#define ff 				first
#define ss 				second
#define sort(v) 		sort(v.begin(),v.end())
#define print(v) 		for(auto n:v) cout<<n<<" "
#define rev(v) 			reverse(v.begin(), v.end())
#define int 			long long int
#define li 				long int
#define vi 				vector<int>
#define pb 				push_back
#define endl 			"\n"
#define rep(i,s,e) 	for(auto i=s; i<e; ++i)
#define mem(var,val)	memset(var,val,sizeof(var))


int max(int a, int b) {return a > b ? a : b;}
bool comp(const pair<int, int> &a, const pair<int, int> &b) { return (a.ss < b.ss);}
void FIO() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}



int32_t main() {
	FIO();

	int t;
	cin >> t;

	while (t--)
	{
		int d, k;
		cin >> d >> k;

		int a = k;
		int b = k - 1;

		int gcd = __gcd(a, b);

		if (d < gcd)
		{
			cout << "NO" << endl;
		}

		else if (d == gcd)
		{
			cout << "YES" << endl;
		}
		// else
		// {

		// }





		return 0;
	}


}
