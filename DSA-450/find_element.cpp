// Element with left side smaller and right side greater
#include<bits/stdc++.h>
using namespace std;


int findElement(int arr[], int n) {
      int mini = INT_MAX;
   
    stack<int> st;
    for (int i = n - 1; i >= 1; i--)
    {
        st.push(mini);
        mini = min(mini, arr[i]);
    }
     int maxi = arr[0];

    for (int i = 1; i < n-1; i++)
    {
        if (arr[i] >= maxi && arr[i] <= st.top())
        {
            // cout << "The answer is: " << arr[i] << endl;
            return arr[i];
            break; 
        }
        maxi = max(maxi, arr[i]);
        st.pop(); 
    }
     
     
    return -1; 
    
}
int main(){
    int arr[4] = {4,2,5,7};
    int n = 4;
    cout<<findElement(arr, n);
}