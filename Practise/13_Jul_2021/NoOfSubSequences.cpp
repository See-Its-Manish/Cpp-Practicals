//AIM : Count No of Subsequences of a String
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
#define loop(i,s,e) 	for(auto i=s; i<e; ++i)
#define mem(var,val)	memset(var,val,sizeof(var))


int max(int a, int b) {return a > b ? a : b;}
bool comp(const pair<int, int> &a, const pair<int, int> &b) { return (a.ss < b.ss);}
void FIO() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int Subsequences(string s, int n)
{
	if (n <= 0)
		return 0;
	if (n == 1)
		return 2;

	return ( 1 + Subsequences(s, n - 1) + Subsequences(s, n - 1));
}


int32_t main() {
	FIO();

	string s;
	cin >> s;

	cout << Subsequences(s, s.size());

	return 0;
}



