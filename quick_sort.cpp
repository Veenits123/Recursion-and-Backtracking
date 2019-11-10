#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

void print(int a[],int n);

int partition(int a[],int st,int end){
	int pivot=a[end];
	int it=st-1;
	for (int j=st;j<=end-1;j++){
		if (a[j]<=pivot){
			it++;
			swap(a[j],a[it]);
		}
	}
	swap(a[it+1],a[end]);
	return it;
}

void quick_sort(int a[],int n,int st,int end){
	if (st>=end){
		return ;
	}
	int it=partition(a,st,end);
	print(a,n);
	cout<<endl;
	quick_sort(a,n,st,it);
	quick_sort(a,n,it+1,end);
}

void print(int a[],int n){
	for (int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
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
	quick_sort(a,n,0,n);
	print(a,n);
	
	return 0;
}