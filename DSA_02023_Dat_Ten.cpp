#include <bits/stdc++.h>

using namespace std;

int n,k;
int x[20];

void Try(int i,int start,vector<string> a){
    if(i > 0){
        start = x[i-1] + 1;
    }
    
    for(int j = start;j < n;j++){
        x[i] = j;
        if(i == k - 1){
            for(int t = 0;t < k;t++){
                cout << a[x[t]] << " ";
            }
            cout<< "\n";
        }
        else {
            Try(i + 1,start,a);
        }
    }
}

int main(){
    cin >> n >> k;
    set<string> s;
    for(int i= 0;i < n;i++){
        string c;
        cin >> c;
        s.insert(c);
    }
    vector<string> a;
    n = s.size();
    for(auto x : s){
        a.push_back(x);
    }
    Try(0,0,a);
    return 0;
}