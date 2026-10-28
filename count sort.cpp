#include <iostream>
#include <vector>
#include <random>

using namespace std;

int LL = -100,RR = 100;
random_device rd;
mt19937 gen(rd());
uniform_int_distribution<int> distrib_arr(LL,RR);


int main()
{

    int n;
    cin >> n;
    vector<int> vec(n);

    for(int i= 0; i < n; i++){
        vec[i] = distrib_arr(gen);
    }

    for(int i : vec){
        cout << i << " ";
    }
    cout << '\n';

    vector<int> s(RR - LL + 1,0);

    for(int i = 0; i < n; i++){
        s[vec[i] - LL]++;
    }

    int it = 0;
    for(int i = 0;i<s.size();i++){
        for(int j = 0;j<s[i];j++){
            vec[it] = (i + LL);
            it++;
        }
    }


    for(int i : vec){
        cout << i << " ";
    }
    cout << '\n';



    return 0;
}
