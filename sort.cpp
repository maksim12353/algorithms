#include <iostream>
#include <vector>
#include <random>

using namespace std;


random_device rd;
mt19937 gen(rd());
uniform_int_distribution<int> distrib_arr(0,9);

void quick_sort(vector<int> &v, int it_b, int it_e){
   if(it_b >= it_e){return;}

   //int pivot = it_b + (it_e - it_b)/2;
   uniform_int_distribution<int> distrib(it_b,it_e);
   int pivot = v[distrib(gen)];

   int it_0 = it_b,it_1 = it_e;

   while(it_0 <= it_1){
    while(v[it_0] < pivot){
        it_0++;
    }
    while(v[it_1] > pivot){
        it_1--;
    }

    if(it_0 <= it_1){
            swap(v[it_0],v[it_1]);
            it_0++;
            it_1--;
    }

   }

   if(it_b < it_1){
    quick_sort(v,it_b,it_1);
   }
   if(it_0 < it_e){
    quick_sort(v,it_0,it_e);
   }
}

//buffer
int arr[1000];

void merge_sort(vector<int> &v,int it_b,int it_e){



   if(it_b == it_e){
    return;
   }

   int m = it_b + (it_e - it_b ) / 2;
   merge_sort(v, it_b, m);
   merge_sort(v, m + 1, it_e);

   int it_0 = it_b,it_1 = m + 1;
   for(int i = it_b; i <= it_e; i++){
     if(it_0 > m){
        arr[i - it_b] = v[it_1];
        it_1++;
     }
     else if(it_1 > it_e){
        arr[i - it_b] = v[it_0];
        it_0++;
     }
     else{
        if(v[it_0] < v[it_1]){
             arr[i - it_b] = v[it_0];
             it_0++;
        }
        else{
             arr[i - it_b] = v[it_1];
             it_1++;
        }
     }


   }

   for(int i = it_b; i <= it_e; i++){
    v[i] = arr[i - it_b];
   }
}

int main()
{


   

    return 0;
}
