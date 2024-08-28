#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[],int r, int k){
    // Creating max heap
    priority_queue<int> pq;
    // This loop initializes the priority queue with the first k elements of the array arr[]
    for(int i = 0; i < k; i++){
        pq.push(arr[i]);
    }
// This is to check the remaining elements if there is any smaller element so maximum element will be removed from the top
//  and smaller element will be pushed in the max heap
    for( int i = k; i<=r; i++){
        if(arr[i] < pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }

    int ans = pq.top();
    return ans;
}
int kthLargest(int arr[],int r, int k){
    // Creating min heap
    priority_queue<int, vector<int>, greater<int>> pq;
    // This loop initializes the priority queue with the first k elements of the array arr[]
    for(int i = 0; i < k; i++){
        pq.push(arr[i]);
    }
// This is to check the remaining elements if there is any greater element so smaller element will be removed from the top
//  and greater element will be pushed in the min heap
    for( int i = k; i<=r; i++){
        if(arr[i] > pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }

    int ans = pq.top();
    return ans;
}
int main(){
int arr[6] = {43,3,94,4,13,222};
int k;
cout<<"enter the k :"<<endl;
cin>>k;
cout<<kthSmallest(arr,5,k)<<endl;
cout<<kthLargest(arr,5,k)<<endl;

}