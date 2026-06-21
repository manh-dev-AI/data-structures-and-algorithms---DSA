#include <bits/stdc++.h>

using namespace std;

struct Node{
    char data;
    Node* left;
    Node* right;
    Node(char x){
        data = x;
        left = right = NULL;
    }
};

void inorder(Node *root){
    if(root == NULL) return;
    inorder(root->left);
    cout << root->data << "";
    inorder(root->right);
}


bool isOp(char c){
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<Node*> st;
        for(char c : s){
            if(!isOp(c)){
                st.push(new Node(c));
            }
            else {
                Node *right = st.top(); 
                st.pop();
                Node *left = st.top();
                st.pop();
                Node* root;
                root = new Node(c);
                root->left = left;
                root->right = right;
                st.push(root);
            }
        }
        inorder(st.top());
        cout << "\n";
    }
    return 0;
}