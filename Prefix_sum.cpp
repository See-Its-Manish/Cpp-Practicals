//Link :
#include<bits/stdc++.h>
using namespace std;
#define sort(v) sort(v.begin(),v.end())
#define print(v) for(auto n:v) cout<<n<<" "
#define rev(v) reverse(v.begin(), v.end())
#define l long
#define ll long long
#define vi vector<int>
#define loop(i,c,inc) for(auto start=i;start<=c;start+=inc)




int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin>>t;

	while(t--!=0){

		int n,k;
		cin>>n>>k;
		vi v;
		v.reserve(n+2);
		v.assign(n+2,0);
		loop(1,k,1){
			int i;
			cin>>i;
			v[i]++;
			v[n+2]--;
		}
		
		loop(2,n+1,1){
			v[start]+=v[start-1];
		}
		
		loop(1,n,1){
			cout<<v[start]<<" ";
		}
		cout<<endl;


	}

	return 0;
}