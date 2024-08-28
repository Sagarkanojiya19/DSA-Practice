#include<bits/stdc++.h>
using namespace std;

int LongestAltitude(int *arr,int n){
        int sum = 0;
        int maxi = 0;
        for(int i =0;  i < n; i++){
             sum += arr[i];
             maxi = max(maxi, sum);
        }
        return maxi;
}

int main(){
    int arr[7] = {-4,-3,-2,-1,4,3,2};
    int n = 7;
    cout<<LongestAltitude(arr, n);
}