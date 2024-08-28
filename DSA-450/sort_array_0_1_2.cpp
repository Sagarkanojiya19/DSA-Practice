#include<bits/stdc++.h>
using namespace std;

void sort012(int *arr,int n){
    int z=0,o=0,t=0;
    for(int i = 0; i < n; i++){
        if(arr[i] ==  0) z++;
        else if(arr[i] ==  1) o++;
        else if(arr[i] ==  2) t++;
    }
    int k =0;
    while(k<z){
        arr[k++] = 0;
    }
    while(k<z+o){
        arr[k++] = 1;
    }
    while(k<n){
        arr[k++] = 2;
    }
}
void print(int arr[] ,int n){
    for(int i=0; i <  n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
int main(){
    int arr[17] = {1,2,0,1,0,0,0,2,2,2,2,2,1,1,1,1,};
    int n =17;
    print(arr,n);
    sort012(arr,n);
    print(arr,n);
}