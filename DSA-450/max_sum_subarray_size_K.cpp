#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[], int n, int k){
    int Maxi = INT_MIN;
    int i =0;
    int j = 0;
    int sum = 0;
    while( j < n){
        sum += arr[j];
        if( j - i + 1 < k){
            j++;
        }
        else if( j - i + 1 == k ){
        Maxi = max(Maxi, sum);
        sum -= arr[i++];
        j++;
        }
    }
    return Maxi;
}

int main(){
    int arr[7] = {1,8,4,6,3,5,7};
    int n = 7;
    int k = 3;

    cout<<"Max sub array sum of size K is : "<<maxSum(arr, n, k);
}