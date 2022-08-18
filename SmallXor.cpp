#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,x,y,t;
priority_queue<pair<int,int>> p,nul;
map<int,vector<int>> k;
void otto() {
  while(!p.empty()) {
    cout << -p.top().first << ' ';
    p.pop();
  }
  cout << endl;
}
void SMALLXOR() {
  p=nul;k.clear();
  cin >> n >> x >> y;
  for(int i=1;i<=n;++i) {
    cin >> t;
    p.push({-t,i});
  }
  for(int i=1;i<=y;++i) {
    pair<int,int> _={-((-p.top().first)^x),p.top().second};
    k[p.top().second].push_back(i);
    if(k[p.top().second].size()==4) {
      int s=k[p.top().second][3]-k[p.top().second][1];
      i+=(y-i)/s*s;
      for(;i<=y;++i) {
        pair<int,int> t={-((-p.top().first)^x),p.top().second};
        p.pop();
        p.push(t);
      }
      otto();
      return;
    }
    p.pop();
    p.push(_);
  }
  otto();
}
signed main() {
  int T;
  cin >> T;
  while(T--) SMALLXOR();
}
