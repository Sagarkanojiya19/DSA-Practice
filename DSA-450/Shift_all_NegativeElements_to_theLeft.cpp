# include<bits/stdc++.h>
 using namespace std;
 int main()
{
int arr[7] = {2,3,-1,4,-5,7,-9};
int n = sizeof(arr)/sizeof(arr[0]);

int i =0,j=n-1;
while(i < j){
    if(arr[i] > 0 && arr[j] < 0){
        swap(arr[i++],arr[j--]);
    }
    else{
        j--;
    }
}
 
for(int k =0; k < n; k++){
    cout<<arr[k]<<" ";
} 
 
}