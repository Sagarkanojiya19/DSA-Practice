#include<bits/stdc++.h>
using namespace std;

int FindPivot(int *arr,int n){
       int left = 0, right = 0;
       for(int i = 1; i < n; i++){
            right += arr[i];
       }
       if(left == right){
            return 0;
       }
       int j = 0;
       int pivot =-1;
       while(j < n){
        left+=arr[j];
        right-=arr[j+1];
        if(left == right){
            pivot = j+1;
            break;
        }
        j++;
       }
       return pivot;
}

int main(){
    int arr[4] = {1,1,2,3};
    int n = 4;
    cout<<FindPivot(arr, n);
}