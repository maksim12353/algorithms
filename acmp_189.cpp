#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;


int f(int n){
    int p = 1;
    for(int i = 2;i <= n;i++){
        p *= i;
    }
    return p;
}

vector<long long> fact(13);

void perm_calc(vector<int> &vec, int n,int k){
    for(int i = 0;i < n;i++){
      
      long long s = k / fact[n - i - 1];

      swap(vec[i],vec[i + s]);
      sort(vec.begin() + i + 1,vec.end());

      k %= fact[n - i - 1];
    }      
}

int main()
{
    for(int i = 0;i <= 12;i++){
        fact[i] = f(i);
    }
    
    int n,k;
    cin >> n >> k;
    vector<int> vec (n, 0);
    iota(vec.begin(),vec.end(),1);
    
    perm_calc(vec,n,k - 1);
    
    for(int i : vec){
        cout << i << ' ';
    }
    
        
  
    
    return 0;
}

