#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back
int a=0,b=0;
int total_ways(int n){
	if (n==1 or n==4){
		return n;
	}
	return total_ways(n-1)+total_ways(n-4);
}

int32_t main(){
	
	ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	//  code starts
	int n;cin>>n;
	cout<<total_ways(n);
	
	return 0;
}