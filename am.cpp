#include <bits/stdc++.h>
using namespace std;
#define TC int t; cin>>t;while(t--)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
#define debug(x) cout<<#x<<" "<<x<<nl;
const ll sz=2e5+7,Inf=1e9+7;
void solve(){
  int a[3], cont= 0 ;
  cin >> a[0] >> a[1] >> a[2];

  if((a[0]&1 && a[1]&1 && a[2]&1)){
    cout << -1 << endl;
    return;
  }

  bool f = 0;

  // if(a[0]&1){ a[0]--; f=1;}
  // if(a[1]&1){ a[1]--; f=1;}
  // if(a[2]&1){ a[2]--; f=1;}

  // if(f) cont=1;

  while(a[2]>1 && (a[1] && a[0])){
    cont += 2;
    a[0] -=1 ;
    a[1] -= 1;
    a[2]-=2;
    sort(a,a+3);
  }

  while(a[1] && a[2]){
    a[1]--;
    a[2]--;
    cont++;
  }

 if(((a[0]&1 )|| (a[1]&1)|| (a[2]&1))){
    cout << -1 << endl;
    return;
  }
  

  

  cout << cont << endl;


  
}
int main() {
  fast;
  TC
  solve();
  return 0;
}