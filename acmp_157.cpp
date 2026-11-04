#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

long long fact(int a){
    if(a == 0){return 1;}

    long long r = 1;
    for(int i = 2;i <=a;i++){
        r *= i;
    }
    return r;
}

int main(){

    string str;
    cin >> str;
    int arr[30] {0};
    for(int i = 0; i < str.size(); i++){
        arr[str[i] - 'a']++;
    }

    long long ans = fact(str.size());

    for(int i = 0; i < 30; i++){
        ans /= fact(arr[i]);
    }
    cout << ans;

    return 0;
}
