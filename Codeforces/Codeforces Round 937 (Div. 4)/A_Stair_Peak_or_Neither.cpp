#include <iostream>
#include <map>
#include <vector>
#include <cmath>
#include <queue>
using namespace std;


void solve(){
	int a,b,c;
  cin>>a>>b>>c;
  if(a<b && b<c)
  {
    cout<<"STAIR"<<endl;
    return;
  }
  else if( a<b && b>c)
  {
    cout<<"PEAK"<<endl;
    return;
  }

  cout<<"NONE"<<endl;
}



int main() {
    int t;
    cin >> t;

    while (t--) {
      solve();
    }

    return 0;
}
