#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main() {
  fast;
  int t ;
  cin>> t;

  while(t--){
   long long n;
   cin>> n;

   if(n&1 || n<4){
      cout<<-1<<endl;
   }else{
      if(n%6){ cout<<(n/6)+1<<" ";}
      else cout<<n/6<<" ";
      cout<<n/4<<endl;
   }
  }
  
  
  return 0;
}