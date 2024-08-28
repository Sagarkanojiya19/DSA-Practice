#include<bits/stdc++.h>
using namespace std;


string commonChars(vector<string>& words)
 { 
    string ans;
    map<char,int> mp;
        int n =words.size();

        for(int i=0; i < words.size(); i++){
        for(int j = 0; j < words[i].length();j++){
            mp[words[i][j]]++;
        }
    }

    for(auto it: mp){
        if( it.second % n == 0){
            for(int i =0; i < it.second/n; i++){
                ans+=it.first;
            }
        }
    }
    return ans;
}   

int main(){
    vector<string> words = {"roller","label","bella"};
    string ans = commonChars(words);
    for(int i =0; i < ans.length(); i++){
        cout<<ans[i]<<" ";
    }
}