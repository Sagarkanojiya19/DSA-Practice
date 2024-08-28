#include<bits/stdc++.h>
using namespace std;
// T.C = O(n+m)
vector<int> optimalSol(int arr1[],int arr2[], int  n, int m){
        int i=0;
        int j=0;
        vector <int> union_arr;
        while(i<n && j<m)  {
            if (arr1[i]<=arr2[j])    {
                if (union_arr.size()==0 || union_arr.back()!=arr1[i])    {
                    union_arr.push_back(arr1[i]);
                }
                 i++;
            }
            else    {
                if (union_arr.size()==0 || union_arr.back()!=arr2[j])    {
                    union_arr.push_back(arr2[j]);
            }
            j++;
        }
        }
        while(i<n) {
            if (union_arr.size()==0 || union_arr.back()!=arr1[i])    {
                    union_arr.push_back(arr1[i]);
                   }
             i++;
        }
        while(j<m)  {
            if (union_arr.size()==0 || union_arr.back()!=arr2[j])    {
                    union_arr.push_back(arr2[j]);
                     }
             j++;  
        }
        return union_arr;   

}
void print(vector<int> arr ,int n){
    for(int i=0; i <  n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int main(){
    int a[5] = {2,4,5,6,7};
    int b[7] = {1,2,3,4,5,6,7};
    int n =5,m=7;
    set<int> U;
    map<int,int> mp;
    vector<int> In;
    // T.C= O(nlogn+n+m)
    /*
    for(int i =0; i  < n; i++ ){
        U.insert(a[i]);
        mp[a[i]]++;
    }
    for(int i =0; i  < m; i++ ){
        U.insert(b[i]);
        mp[b[i]]++;
    }
    for(auto it: mp){
        if(it.second >= 2){
            In.push_back(it.first);
        }
    }
    vector<int> ans;
    for(auto it: U){
        ans.push_back(it);
    }
    sort(begin(ans),end(ans));*/
    vector<int> ans  = optimalSol(a,b,n,m);
    print(ans, ans.size());
    cout<<endl;
    // print(In,In.size());

}