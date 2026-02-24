#include<bits/stdc++.h>

using namespace std;

int x[20];

void in(int n){
    for(int i = 1;i <= n;i++){
        cout << x[i];
    }
    cout << endl;
}

void Try(int i,int cnt,int n,int k){
    for(int j = 0;j <= 1;j++){
        x[i] = j;
        int dem = cnt + j;
        if(i == n){
            if(dem == k){
                in(n);
            }
        }
        else {
            if(dem <= k){
                Try(i + 1,dem,n,k);
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n , k;
        cin >> n >> k;
        Try(1,0,n,k);
        
    }
    return 0;
}