// Find the maximum subarray sum

#include<bits/stdc++.h>
using namespace std;

long long  solveoptimal(int arr[], int n, vector<int> &ans){
    long long maxi = LONG_MIN;
    long long sum = 0;

    vector<int> temp;
    for(int i =0;  i < n ; i++){
        sum+=arr[i];
        maxi = max (maxi, sum);
        temp.push_back(arr[i]);
        if( sum < 0){
            sum = 0;
            temp.clear();
        }
    }

    ans = temp;
    return maxi;
}

int main(){
    int arr[8] = {-2,-3,4,-1,-2,1,5,-3};
    int n = 8;
    vector<int> ans;
    cout<<solveoptimal(arr, n, ans);
    cout<<endl;
    for(auto it: ans){
        cout<<it<<" ";
    }

}
