#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10] = { 12, 24, 83, 38403, 9292, 48 , 1, -1, 33, 483};

    int mini = INT_MAX;
    int maxi = INT_MIN;
    for(int i=0; i < 10; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
        if(arr[i] < mini){
            mini = arr[i];
        }
    }
    cout<<"Minimum Element is: "<<mini<<endl<<"Maximum element is: "<<maxi<<endl; 
}