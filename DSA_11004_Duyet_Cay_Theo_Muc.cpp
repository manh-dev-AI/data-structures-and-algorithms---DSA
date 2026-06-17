#include <bits/stdc++.h>

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

node * search(node* T,int x){
    node* p;
    if(T == NULL){
        return  NULL;
    }
    if(T->key == x){

        return T;
    }
    p = search(T->left , x);
    if(p == NULL ) p = search(T->right , x);
    return p;
}

void ADD_LEFT(node* T,int x,int y){
    node* p,*q;
    p = search(T , x);
    if(p == NULL ){

        return;
    }
    else if(p->left != NULL) return;
    else p->left = new node (y);
}
void ADD_RIGHT(node *T,int x,int y){
    node *p,*q;
    p = search(T , x);
    if(p == NULL){

        return;
    }
    else if(p->right != NULL) return ;
    else {
        p->right = new node (y);
    }
}
void in(node * root){
    queue<node*> qu;
    qu.push(root);
    while(!qu.empty()){
        node *s = qu.front();
        qu.pop();
        cout << s->key << " ";
        if(s->left != NULL) qu.push(s->left);
        if(s->right != NULL) qu.push(s->right);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        node *root = NULL;
        for(int i = 0;i < a;i++){
            int A , B;
            cin >> A >> B;
            char C ; cin >> C;
                if(root == NULL){
                    root = new node(A);
                }
                if(C == 'L') ADD_LEFT(root , A , B);
                else ADD_RIGHT(root , A, B);
        }
        in(root);
        cout << "\n"; 
    }
    return 0;
}