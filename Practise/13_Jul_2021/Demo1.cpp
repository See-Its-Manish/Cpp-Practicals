//AIM : Sum of two Numbers using Function
#include<bits/stdc++.h>
using namespace std;
#define sort(v) sort(v.begin(),v.end())
#define print(v) for(auto n:v) cout<<n<<" "
#define rev(v) reverse(v.begin(), v.end())
#define int long long
#define l long
#define ll long long
#define vi vector<int>
#define pb push_back
#define el cout<<"\n"
#define loop(st,con,inc) for(auto it=st; it<con; it+=inc)

int max(int a, int b)
{
	return (a > b ? a : b);
}
int min(int a, int b)
{
	return (a > b ? b : a);
}


int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string par;
	getline(cin, par);
	int freq[26] = {0};
	for (int i = 0; i < par.length(); i++)
	{
		if (par.at(i) == ' ') continue;
		freq[par.at(i) - 'a']++;
	}
	int index = 0;
	for (char c = 'a'; c <= 'z'; c++)
	{
		cout << c << " = " << freq[index++] << endl;
	}





	return 0;
}