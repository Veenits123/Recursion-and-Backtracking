#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

string a[]={"zero","one","two","three","four","five","six","seven","eight","nine"};

void spell(int n){
	if (n==0){
		return ;
	}
	//cout<<a[r]<<" ";
	spell(n/10);
	cout<<a[n%10]<<" ";
	return ;

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
	spell(n);
	
	return 0;
}