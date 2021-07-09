#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int ele){
        data = ele;
        left = right = nullptr;
    }
};

class BST{
    Node *root;

    void inorder(Node *root){
        if(root == nullptr) return;
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }

    void preorder(Node *root){
        if(root == nullptr) return;
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }

    void postorder(Node *root){
        if(root == nullptr) return;
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }

    Node* insert_ele(Node *root, int ele){
        if(root == nullptr) return new Node(ele);

        if(ele <= root->data){
            root -> left = insert_ele(root->left,ele);
        }else{
            root->right = insert_ele(root->right,ele);
        }

        return root;
    }

    bool is_ele_present(Node *root, int ele){
        if(root == nullptr) return false;
        if(ele == root->data) return true;
        if(ele < root->data ) return is_ele_present(root->left,ele);
        return is_ele_present(root->right,ele);
    }

    public:
    BST(){
        root = nullptr;
    }

    void insert(int ele){
        root = insert_ele(root,ele);
    }

    void is_present(int ele){
        if(is_ele_present(root,ele)){
            cout<<ele<<" is present"<<endl;
        }else{
            cout<<ele<<" not found"<<endl;
        }
    }

    void traversals(){
        cout<<"Inorder:";inorder(root);
        cout<<endl;
        cout<<"Preorder:";preorder(root);
        cout<<endl;
        cout<<"Postorder:";postorder(root);
        cout<<endl;
    }
};

int main(){
    vector<int> arr = {1,2,3,4,5,6,8,9,10};
    BST tree;
    for(int ele: arr){
        tree.insert(ele);
    }

    int n;
    cin>>n;

    tree.is_present(n);

    tree.traversals();

    return 0;
}