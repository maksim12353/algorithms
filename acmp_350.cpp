#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string s;
vector<int> v(8,0);
vector<int> perm(8, 0);


void r(int it){
  for(int i = 0;i < s.size(); i++){
    if(v[i] == 0){
      perm[it] = i;
      v[i] = 1;
      r(it + 1);
      v[i] = 0;
    }
  }

  if(it != s.size() - 1){return;}
  for(int i = 0;i < s.size(); i++){
    cout << s[perm[i]];
  }
  cout << endl;
}


int main()
{
    cin >> s;
    r(0);

    return 0;
}
