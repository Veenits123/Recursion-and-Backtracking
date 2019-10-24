#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

void tower_of_hanoi(int n,string source,string destination,string helper){
	//no disks left
	if (n==0){
		return ;
	}
	//move n-1 disks from src to helper
	tower_of_hanoi(n-1,source,helper,destination);
	cout<<"Move "<<n<<"th disk from "<<source<<" to "<<destination<<endl;
	tower_of_hanoi(n-1,helper,destination,source);
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
	string helper,source,destination;
	cin>>source>>destination>>helper;
	tower_of_hanoi(n,source,destination,helper);
	
	return 0;
}