#include <iostream>
#include <stdlib.h>

using namespace std;

int ans(int size, int a[]);

int main(){
int t;
int size, a[101];
cin >> t;
for(int i = 0; i < t; i++){
cin >> size;
for(int j = 0; j < size; j++){
cin >> a[j];
}
cout << ans(size, a);
cout << "\n";
}
}

int ans(int size, int a[]){
bool all_negative = true;
int max_n = -101;
for(int i = 0; i < size; i++){
max_n = max(max_n, a[i]);

if(a[i] > 0){
all_negative = false;
}
}
if(all_negative){
return max_n;
}
int max_so_far = 0;
int max_sum = 0;
for(int i = 0; i < size; i++){
max_so_far += a[i];
if(max_so_far < 0){
max_so_far = 0;
}
max_sum = max(max_sum, max_so_far);
}
return max_sum;
}