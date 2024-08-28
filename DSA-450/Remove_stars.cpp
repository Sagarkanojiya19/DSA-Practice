#include<bits/stdc++.h>
using namespace std;
string NewString(string &s){
    string ans="";
    stack<char> st1;
    int cnt =0;
    for(int i = s.length()-1; i >= 0; i--){
        if(s[i] == '*'){
            cnt++;
            continue;
        }
        else{
            i = i - cnt;
            st1.push(s[i]);
            cnt = 0;
        }
    }
    while (!st1.empty())
    { 
        char ch = st1.top();
        ans+= ch;
        
        st1.pop();
    }
    return ans;
    
}
int main(){
    string s =  "erase****";

    cout<<NewString(s);
}