#include <bits/stdc++.h>

using namespace std;

int n;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

int search(vector<int> inorder,int l,int r,int x){
    for(int i = l;i <= r;i++){
        if(inorder[i] == x){
            return i;
        }
    }
    return -1;
}

int preidx = 0;

Node* makeTree(vector<int> inorder,vector<int> preorder,int idxL,int idxR){
    if(idxL > idxR){
        return NULL;
    }

    int gt = preorder[preidx++];
    Node* root = new Node(gt);

    int pos = search(inorder , idxL,idxR , gt);

    root->left = makeTree(inorder , preorder , idxL , pos - 1);
    root->right = makeTree(inorder , preorder , pos + 1,idxR);
    return root;
}

void postorder(Node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main(){
    int t;
    cin>> t;
    while(t--){
        preidx = 0;
        int n;
        cin  >> n;
        vector<int> a(n) , b(n);
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        for(int i = 0;i < n;i++){
            cin >> b[i];
        }
        Node* root = makeTree(a , b , 0 , n-1);
        postorder(root);
        cout << "\n";
    }
    return 0;
}