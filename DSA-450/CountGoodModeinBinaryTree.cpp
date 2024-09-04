#include<bits/stdc++.h>
#include<math.h>
using namespace std;

class Node{
public:
int data;
Node* left;
Node* right;

Node(int d){
    this -> data = d;
    this -> left = NULL;
    this -> right = NULL;
}

};
Node* buildtree(){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    Node* root = new Node(data);

    if(data ==-1){
        return NULL;
    }
    cout<<"enter the data for inserting in left "<<endl;
    root->left = buildtree();
    cout<<"Enter the data for inserting in rigth "<<endl;
    root->right=buildtree();
}
void solve(Node* root, int currentMax, int &ans) {
    if (root == NULL) {
        return;
    }
    
    // If current node value is greater than or equal to currentMax, it's a good node
    if (root->data >= currentMax) {
        ans += 1;
        currentMax = root->data;  // Update currentMax to root's value
    }
    
    // Recur for the left and right children
    solve(root->left, currentMax, ans);
    solve(root->right, currentMax, ans);
}


    int goodNodes(Node* root) {
    if (root == NULL) {
        return 0;
    }
    
    int ans = 0;
    solve(root, INT_MIN, ans);  // Start DFS with the smallest possible integer
    return ans;
    }

// input : 1 3 -1 -1 2 4 -1 -1 5 -1 -1
int main(){
    Node* root = buildtree();

    cout<<goodNodes(root);
}