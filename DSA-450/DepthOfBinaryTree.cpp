#include<iostream>
#include<queue>
#include<map>
#include<vector>
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

void solve(Node* root,int& ans, int height){
        if(root == NULL){
            ans = max(ans,height);
            return ;
        }
            solve(root-> left,ans,height+1);
            solve(root-> right,ans,height+1);
       
    }
        
    int maxDepth(Node* root) {
        if( root == NULL){
            return 0;
        }
        if(root -> left == NULL && root -> right == NULL){
            return 1;
        }

        int height = 0;
        int ans = 0;
        
        solve(root,ans, height);
        return ans;
    }

// input : 1 3 -1 -1 2 4 -1 -1 5 -1 -1
int main(){
    Node* root = buildtree();
    

    cout<<endl;
    cout<<maxDepth(root);
}