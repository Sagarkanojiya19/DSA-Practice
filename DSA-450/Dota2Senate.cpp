#include<bits/stdc++.h>
using namespace std;

string Winner(string s){
    // Initailizing the queue to track the R and D
    queue<int> R;
    queue<int> D;

    // Pushing Elements in Queues
    for(int i = 0; i< s.length(); i++){
        if(s[i]=='R'){
            R.push(i);
        }
        else{
            D.push(i);
        }
    }


    while (!R.empty() && !D.empty())
    {   
        int f1 =R.front();
        int f2 =D.front();

        // Checking the Senate
        if(f1 < f2){

            //Removing the Element and pushin the victory Element in it's party queue
            R.pop();
            R.push(f1 + s.length());
            D.pop();
        }
        else{
            D.pop();
            D.push(f2 + s.length());
            R.pop();
        }
        
    }

    // Returning the ans 
    if(R.empty()){
        return "Dire";
    }
    else{
        return "Radiant";
    }

}

int main(){
    string s = "RDRDD";
    cout<<Winner(s);
}