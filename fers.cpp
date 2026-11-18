#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector < int > a;

bool Hit(int x){
    for (int i = 1; i < x; i++)
        if (a[i] == a[x] || x - i == abs(a[x] - a[i]))
            return true;
    return false;
}

int main(){
    int n, k = 0;
    cin >> n;
    a.resize(n + 2);
    int i = 1; a[1] = 1;
    while (0 < i){
        while (1 <= i && i <= n){
            while (a[i] <= n && Hit(i))
                a[i]++;
            if (a[i] <= n)
                a[++i] = 1;
            else
                a[--i]++;
        }
        if (i > n){
            cout << ++k << "  :  ";
            for (int j = 1; j <= n; j++)
                cout << a[j] << " ";
            cout << endl;
            i = n;
            a[i]++;
        }
    }
    return 0;
}
