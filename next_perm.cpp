#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool perm(vector<int> &vec){
    int i;
    for(i = vec.size() - 2; i >= 0; i--){
        if(vec[i] < vec[i + 1]){
            break;
        }
    }
    
    if(i == -1){return false;}
    
    int j;
    for(j = vec.size() - 1; vec[j] <= vec[i];j --);
    
    swap(vec[i], vec[j]);
    
    reverse(vec.begin() + 1 + i,vec.end());
    
    return true;
}

int main()
{
    
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0;i < n;i++){
        cin >> vec[i];
    }
    
    sort(vec.begin(),vec.end());
   
    // if(perm(vec)){
    //     cout << "yes\n";
    //     for(int i : vec){
    //         cout << i << " ";
    //     }
    //     cout << '\n';
    // }
    // else{
    //     cout << "no\n";
    // }
    
    do{
        for(int i : vec){
            cout << i << " ";
        }
        cout << "\n";
        
    //}while(perm(vec));
    }while(next_permutation(vec.begin(), vec.end()));
    
    return 0;
}
