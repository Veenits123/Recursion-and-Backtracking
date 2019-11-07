#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back
void print(int a[],int n);

//merge two sorted arrays
void merge(int a[],int n,int st,int end){
	int mid=(st+end)/2;
	int i=st,j=mid+1,k=st;
	int temp[n+1];
	while(i<=mid and j<=end){
		if (a[i]<a[j]){
			temp[k]=a[i];
			i++;k++;
		}
		else{
			temp[k]=a[j];
			j++;k++;
		}
	}
	//if some elemets before mid were left
	while(i<=mid){
		temp[k]=a[i];
		i++;k++;
	}
	//if some elements after mid were left
	while(j<=end){
		temp[k]=a[j];
		k++;j++;
	}
	//copying entire elements of temp array to original array
	int z=st;
	while(z<=end){
		a[z]=temp[z];
		z++;
	}
}

void merge_sort(int a[],int n,int st,int end){
	if (st>=end){
		return ;
	}
	int mid=(st+end)/2;
	merge_sort(a,n,st,mid);
	merge_sort(a,n,mid+1,end);

	merge(a,n,st,end);
	print(a,n);
	cout<<endl;
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
	merge_sort(a,n,0,n);
	print(a,n);

	return 0;
}