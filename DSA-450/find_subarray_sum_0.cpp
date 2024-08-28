#include<bits/stdc++.h>
using namespace std;




bool solve(int *a, int n){
     unordered_set<int> s;
        
        int sum =0;
        for(int i =0; i < n; i++){
            sum+=a[i];
            if(sum==0 || s.find(sum)!=s.end()){
                return true;
            }
            s.insert(sum);
        }
        
        return false;
}
int main(){
    int a[5] = {4, 2 ,-3, 1 ,6 };
    int  n =5;
    if(solve(a, n)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}