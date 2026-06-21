#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

Node* search(Node* root ,int x){
    if(root == NULL){
        return NULL;
    }
    if(root->data == x){
        return root;
    }

    Node* p = search(root->left , x);
    if(p == NULL){
        p = search(root->right , x);
    }
    return p;
}

bool ok = true;
void dfs_kt(Node* root){
    if(root == NULL || !ok) return ;
    if((root->left != NULL && root->right == NULL) || (root->left == NULL && root->right != NULL)){
        ok = false;
        return;
    }
    dfs_kt(root->left);
    dfs_kt(root->right);
}
void dfs_kt2(Node* root){
    if(root == NULL || !ok) return ;
    if(root->left == NULL && root->right == NULL){
        return;
    }
    if(root->left == NULL || root->right == NULL){
        ok = false;
        return;
    }
    dfs_kt2(root->left);
    dfs_kt2(root->right);
}



void add_left(Node* root ,int x,int y){
    if(root == NULL){
        return;
    }
    Node *p = search(root , x);
    if(p == NULL) return ;
    else if(p->left != NULL) return;
    else p->left = new Node(y);
}

void add_right(Node* root,int x,int y){
    if(root == NULL){
        return;
    }
    Node *p = search(root , x);
    if(p == NULL){
        return;
    }
    else if(p->right != NULL) return;
    else p->right = new Node(y);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Node* root = NULL;
        for(int i = 0;i < n;i++){
            int u , v;
            char c;
            cin >> u >> v >> c;
            if(root == NULL){
                root= new Node(u);
            }
            if(c =='L'){
                add_left(root , u,v);
            }
            else add_right(root , u , v);
        }
        ok = true;
        dfs_kt2(root);
        if(ok){
            cout << "1\n";
        }
        else cout << "0\n";
    }
    return 0;
}