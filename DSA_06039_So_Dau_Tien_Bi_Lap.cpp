#include <bits/stdc++.h>

using namespace std;

bool check(vector<int> a,int n ){
    for(int i = 0;i < n - 1;i++){
        for(int j = i + 1;j < n;j++){
            if(a[j] == a[i]){
                cout << a[i] << "\n";
                return true;
            }
        }
    }
    return false;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int &x : a){
            cin >> x;
        }
        if(!check(a , n )){
            cout << "NO\n";
        }
        
    }
    return 0;
}