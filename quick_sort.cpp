#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

int binary_search(int a[],int st,int end,int key){
	while(st<=end){
		int mid=(st+end)/2;
		if (a[mid]==key){
			return mid;
		}
		if (a[mid]>key){
			end=mid-1;
		}
		else{
			st=mid+1;
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
	//quick_sort(a,n,0,n);
	//print(a,n);
	cout<<binary_search(a,0,n,9);
	
	return 0;
}