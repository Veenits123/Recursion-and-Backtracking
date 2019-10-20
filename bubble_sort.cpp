#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

//iterative
void bubble_sort(int a[],int n){

	for (int i=0;i<n-1;i++){
		bool swapped=false;
		for (int j=0;j<n-i-1;j++){
			if (a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				swapped=true;
			}
		}
		if (swapped==false){
			break;
		}
	}
	for (int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
//recursive
void bubble_rec_sort(int a[],int n){
	if (n==1){
		return ;
	}
	for (int i=0;i<n-1;i++){
		if (a[i]>a[i+1]){
			swap(a[i],a[i+1]);
		}
	}
	bubble_rec_sort(a,n-1);
}
//pure recursive
void bubble_pure_rec_sort(int a[],int n,int j){
	if (n==1){
		return ;
	}
	if (j==n-1){
		return bubble_pure_rec_sort(a,n-1,0);
	}
	if (a[j]>a[j+1]){
		swap(a[j],a[j+1]);
	}
	bubble_pure_rec_sort(a,n,j+1);
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
	//bubble_sort(a,n);
	//bubble_rec_sort(a,n);
	bubble_pure_rec_sort(a,n,0);
	print(a,n);
	
	return 0;
}