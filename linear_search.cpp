#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

int linear_search(int a[],int n,int i,int key){

	if (i==n){
		return -1;
	}
	if (a[i]==key){
		return i;
	}
	return linear_search(a,n,i+1,key);
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
	int key;cin>>key;
	cout<<linear_search(a,n,0,key);
	
	return 0;
}