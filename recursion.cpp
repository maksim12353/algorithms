#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int fact(int n){
    int res = n;
    if(n != 1){
        res *= fact(n - 1);
    }

    return res;
}


int arr[100] = {0};

int fib(int p){

  if(arr[p] != -1){
    return arr[p];
  }

  arr[p] = fib(p - 1) + fib(p - 2);
  return arr[p];
}

int main()
{
    //cout << fact(5);

    for(int i = 0; i < 100; i++){
        arr[i] = -1;
    }
    arr[0] = 0;
    arr[1] = 0;
    arr[2] = 1;

    cout << fib(9);

    return 0;
}
