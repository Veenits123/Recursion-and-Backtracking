#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

bool sorted(int a[],int n){
	if (n==1){
		return true;
	}
	if (a[0]<a[1] and sorted(a+1,n-1)){
		return true;
	}
	return false;
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
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<(sorted(a,n)?"yes":"no");
	
	return 0;
}