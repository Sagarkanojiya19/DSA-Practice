#include<bits/stdc++.h>
using namespace std;

int maxlength(string s, int n, int k){
    int Maxi = INT_MIN;
    int i =0;
    int j = 0;
    int v = 0;
    while( j < n){
        if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' ||s[j] == 'o' ||s[j] == 'u'){
            v++;
        }
        if(j - i + 1 < k){
            j++;
        }
        else if (j - i + 1 == k){
            Maxi = max ( Maxi , v);
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u'){
                v-=1;
            }
            i++;
            j++;
        }
    }
    return Maxi;
}

int main(){
   string s = "bbbbbbbbb";
    int n = 9;
    int k = 1;

    cout<<"Max sub array sum of size K is : "<<maxlength(s, n, k);
}