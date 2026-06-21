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

void spiral_order(Node* root){
    queue<Node*> qu;
    qu.push(root);
    bool rev = false;
    while(!qu.empty()){
        int sz = qu.size();
        
        vector<int> cur;
        for(int i = 0;i < sz;i++){
            Node*p = qu.front();
            qu.pop();

            cur.push_back(p->data);

            if(p->right != NULL) qu.push(p->right);
            if(p->left != NULL) qu.push(p->left);
            
        }
        if(rev){
            reverse(cur.begin() , cur.end());
        }
        rev = !rev;
        for(int x : cur ){
            cout << x << " ";
        }
    }
}

void inxoanoc(Node* root){
    stack<Node*> st1;
    stack<Node*> st2;
    st1.push(root);
    while(!st1.empty() || !st2.empty()){
        while(!st1.empty()){
            Node* p = st1.top();
            st1.pop();

            cout << p->data << " ";

            if(p->right != NULL)st2.push(p->right);
            if(p->left) st2.push(p->left);
        }
        while(!st2.empty()){
            Node* p = st2.top();
            st2.pop();

            cout << p->data << " ";

            if(p->left != NULL ) st1.push(p->left);
            if(p->right != NULL) st1.push(p->right);
        }
    }
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
        inxoanoc(root);
        cout << "\n";

    }
    return 0;
}