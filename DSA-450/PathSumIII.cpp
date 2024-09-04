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
void solve(Node* root, int target, int currentSum, int &paths) {
    if (root == NULL) {
        return;
    }
    
    // Include the current node's value in the sum
    currentSum += root->data;
    
    // Check if the current path sum equals the target sum
    if (currentSum == target) {
        paths += 1;
    }
    
    // Continue the search for paths that sum up to the target
    solve(root->left, target, currentSum, paths);
    solve(root->right, target, currentSum, paths);
}

void traverse(Node* root, int targetSum, int &paths) {
    if (root == NULL) {
        return;
    }
    
    // Start solving from the current node
    solve(root, targetSum, 0, paths);
    
    // Also check paths starting from the left and right children
    traverse(root->left, targetSum, paths);
    traverse(root->right, targetSum, paths);
}

int pathSum(Node* root, int targetSum) {
    int paths = 0;
    traverse(root, targetSum, paths);
    return paths;
}

int main(){
    Node * root = buildtree();

    cout<<"No. of Paths is: "<<pathSum(root,22)<<endl;
}
// 10 5 3 3 -1 -1 -2 -1 -1 2 -1 1 -1 -1 -3 -1 11 -1 -1
// 5 4 11 7 -1 -1 2 -1 -1 -1 8 13 -1 -1 4 5 -1 -1 1 -1 -1