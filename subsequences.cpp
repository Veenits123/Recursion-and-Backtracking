#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

void subsequences(char s[100],char ans[100],int i,int j){
	if (s[i]=='\0'){
		ans[j]='\0';
		cout<<ans<<endl;
		return ;
	}
	ans[j]=s[i];
	subsequences(s,ans,i+1,j+1);
	subsequences(s,ans,i+1,j);
	return ;
}

//using string 
void print_subs(string inp,string out){
	if (inp.length()==0){
		cout<<out<<endl;
		return ;
	}
	print_subs(inp.substr(1),out);
	print_subs(inp.substr(1),out+inp[0]);
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
	//char s[100],ans[100];cin>>s;

	//subsequences(s,ans,0,0);

	string inp,out;cin>>inp;
	print_subs(inp,out);

	
	return 0;
}