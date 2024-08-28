// T.C = O((n*m)+m) n & m are the sizes of arrays
# include<bits/stdc++.h>
 using namespace std;
 int main()
{
vector<int> arr1 = {1,3};
vector<int> arr2 = {2,4,5,8,10};

int i =0, j =0;
while(i < arr1.size() ){
    if(arr1[i]<arr2[0]){
        i++;
    }
    else if(arr1[i] == arr2[0]){
        i++;
    }
    else{
        swap(arr1[i],arr2[0]);
        i++;
        int k =0;
        while(k < arr2.size() -1){
            if(arr2[k] > arr2[k+1]){
                swap(arr2[k],arr2[k+1]);
                k++;
            }
            else{
                break;
            }
        }
    }
}
for(auto it: arr2){
    arr1.push_back(it);
}
for(int a =0; a < arr1.size(); a++){
    cout<<arr1[a]<<" ";
}
}