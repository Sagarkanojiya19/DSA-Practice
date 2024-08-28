/*
#include<bits/stdc++.h>
using namespace std;
void print(int * a, int n){
    for(int i =0;  i < n ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    // int a[8] = {1,-4,-3,2,4,-1,-2,3};
    int a[10] = {-5,-2,5,2,4,7,1,8,0,-8};
    int n =10;
   print(a,n);
   for(int i =1; i < n-1; i++){
    if(a[i-1]> 0 && a[i] > 0 && a[i+1] < 0){
        swap(a[i-1],a[i+1]);
    }
    if(a[i-1]< 0 && a[i] < 0 && a[i+1] > 0){
        swap(a[i],a[i+1]);
    }
   }
   print(a,n);

}
*/
#include<bits/stdc++.h>
using namespace std;
void print(int * a, int n){
    for(int i =0;  i < n ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[6]= {3,1,-2,-5,2,-4};
    int n =6;
    
    cout<<" Original array"<<endl;
    print(arr, n);
    /*
    int pos[n/2];
    int neg[n/2];
    int j =0,k=0;
    for(int i =0; i < n ; i++){
        if(arr[i] < 0){
            neg[j] = arr[i];
            j++;
        }
        else{
            pos[k++]= arr[i];
        }
    }
    print(neg,n/2);
    print(pos,n/2);
    

    for(int i = 0; i < n/2; i++){
        arr[2*i]  = pos[i]; // bcz all the positive elements will be on even indexes
        arr[(2*i)+1]  = neg[i]; // bcz all the negative elements will be on odd indexes
    }
    print(arr,n);
*/
int p = 0;
int ne = 1;
int i = 0;
int ans[n] ={0};
while( p < n &&  ne  < n && i < n )
{
    if(arr[i] < 0){
        ans[ne] = arr[i];
        ne+=2;
    }
    else{
        ans[p] = arr[i];
        p+=2; 
    }
    i++;
}
    cout<<" After Rearranging the array"<<endl;
print(ans, n);



}