#include <bits/stdc++.h>
using namespace std;

//After puting dbg.h file in source code folder
//Must include this code
#ifndef ONLINE_JUDGE
  #include "dbg.h"    
#endif


int32_t main() {
  int n; cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
  	cin >> v[i];
  }

  //to print the vector, just use debug(parameter)
  debug(v);
  
}

