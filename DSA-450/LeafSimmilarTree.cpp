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
void leaves(Node* root, vector<int> &leaf){
    if(root == NULL){
        return;
    }
    else if( root -> left == NULL && root -> right == NULL){
        leaf.push_back(root->data);
        return;
    }
    leaves(root->left,leaf);
    leaves(root->right,leaf);
}
bool isSimmilar(Node* root1, Node* root2){
vector<int> tree1,tree2;
leaves(root1,tree1);
leaves(root2,tree2);

if(tree1.size() != tree2.size()){
    return false;
}
else{
    for(int i =0; i < tree1.size(); i++){
        if(tree1[i] != tree2[i]){
            return false;
            break;
        }
    }
}
return true;
}
int main(){
    Node* root1 = buildtree();
    Node* root2 = buildtree();


    if(isSimmilar(root1,root2)){
        cout<<"Leaves are simmilar";
        cout<<endl;
    }
    else{
        cout<<"Leaves are not simmilar";
    }
}