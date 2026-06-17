#include <bits/stdc++.h>

using namespace std;

struct node
{
    int key;
    node *right;
    node *left;
    node(int item){
        key = item;
        left = NULL;
        right = NULL;
    }
};

node* insert(node* root,int x){
    if(root == NULL){
        return new node(x);
    }
    if(root->key == x){
        return root;
    }
    if(root->key < x){
        root->right = insert(root->right , x);
    }
    else {
        root->left = insert(root->left , x);
    }
    return root;
}

void in(node* root){

    if(root == NULL)
        return;

    if(root->left == NULL && root->right == NULL){
        cout << root->key << " ";
        return;
    }

    in(root->left);
    in(root->right);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        node* root = NULL;
        for(int i = 0;i < n;i++){
            int a ; cin >> a;
            root = insert(root , a);
        }
        in(root);
        cout << "\n";
    }
}