#include <bits/stdc++.h>

using namespace std;

struct Node{
    string data;
    Node* left;
    Node* right;
    Node (string x){
        data = x;
        left = right = NULL;
    }
};

Node* makeTree(vector<string>  &a,int i){
    if(i >= a.size()){
        return NULL;
    }
    Node* root = new Node(a[i]);

    root->left = makeTree(a , 2*i + 1);
    root->right = makeTree(a , 2*i + 2);

    return root;

}

long long calc(Node* root){
    if(root->left == NULL && root->right == NULL){
        return stoll(root->data);
    }
    long long l = calc(root->left);
    long long r = calc(root->right);
    if(root->data == "+") return l + r;
    else if(root->data == "-") return l - r;
    else if(root->data == "*") return l * r;
    else return l / r;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<string> a(n);
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }

        Node* root = makeTree(a , 0);
        long long ans = calc(root);
        cout << ans << "\n";
        
    }
    return 0;
}