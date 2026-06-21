#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left, *right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};

int search(vector<int> &inorder,int x){
    for(int i = 0;i <= inorder.size();i++)
    { 
        if(inorder[i] == x){
            return i;
        } 
    } 
    return -1; 
}

Node* makeTree(vector<int> inorder, vector<int> level){
    if(level.empty()) return NULL;

    int val = level[0];
    Node* root = new Node(val);

    int pos = search(inorder , val);

    vector<int> leftIn(
        inorder.begin(),
        inorder.begin() + pos
    );

    vector<int> rightIn(
        inorder.begin() + pos + 1,
        inorder.end()
    );

    unordered_set<int> leftSet(leftIn.begin(), leftIn.end());

    vector<int> leftLevel, rightLevel;

    for(int i = 1; i < level.size(); i++){
        if(leftSet.count(level[i]))
            leftLevel.push_back(level[i]);
        else
            rightLevel.push_back(level[i]);
    }

    root->left = makeTree(leftIn, leftLevel);
    root->right = makeTree(rightIn, rightLevel);

    return root;
}

void postorder(Node* root){
    if(root == NULL) return;

    postorder(root->left);
    postorder(root->right);

    cout << root->data << " ";
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> inorder(n), level(n);

        for(int i = 0; i < n; i++)
            cin >> inorder[i];

        for(int i = 0; i < n; i++)
            cin >> level[i];

        Node* root = makeTree(inorder, level);

        postorder(root);
        cout << "\n";
    }
}