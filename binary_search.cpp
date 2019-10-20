#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

int binary_search(int a[],int n,int st,int end,int key){

	if (st<=end){
		int mid=(st+end)/2;
		if (a[mid]==key){
			return mid;
		}
		if (a[mid]<key){
			return binary_search(a,n,mid+1,end,key);
		}
		if (a[mid]>key){
			return binary_search(a,n,st,mid-1,key);
		}
	}
	return -1;
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
	cout<<binary_search(a,n,0,n,key);
	
	return 0;
}