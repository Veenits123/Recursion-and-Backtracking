#include<bits/stdc++.h>
using namespace std;

//#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

int multiply(int a,int b){
  if (a==0 or b==0){
    return 0;
  }
  if (a<b){
    return multiply(b,a);
  }
  int ans=0;
  ans+=a+multiply(a,b-1);
  return ans;
}

int all_multi(int a,int b){
  if (a==0 or b==0){
    return 0;
  }
  if (a>0 and b<0){
    return all_multi(b,a);
  }
  //to take less time
  if (a>b){
    return all_multi(b,a);
  }
  if (a<0 and b<0){
    return all_multi(abs(a),abs(b));
  }
  return a+all_multi(a,b-1);
}
//convert string to integer
int stoint(string s){
  if (s.length()==1){
    return (s[0]-'0');
  }
  double y=stoint(s.substr(1));
  double x=s[0]-'0';

  x=x*pow(10,s.length()-1)+y;

  return int(x);

}



int main(){
  
  ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts
  string a,b;
  cin>>a;
  //cout<<multiply(a,b);
  //cout<<all_multi(a,b);
  cout<<stoint(a);
  
  return 0;
}