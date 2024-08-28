#include<bits/stdc++.h>
using namespace std;

void reverse(int *arr, int n){
    int i =0;
    int j = n-1;
    while(i <j){
        swap(arr[i++],arr[j--]);
    }
}

void print(int *arr, int n){
    for(int i =0; i< n; i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[10000];
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    for(int i =0; i < n; i++){
        cin>>arr[i];
    }
    cout<<"Original  array: ";

    print(arr, n);
    reverse(arr, n);
    cout<<"Reversed  array: ";
    print(arr, n); 
}