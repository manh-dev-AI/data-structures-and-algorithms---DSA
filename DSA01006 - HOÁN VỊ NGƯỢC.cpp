#include <bits/stdc++.h>

using namespace std;

int x[20];
int used[20] ={0};

void Try(int i,int n){
    for(int j = n;j >= 1;j--){
        if(!used[j]){
            used[j] = 1;
            x[i] = j;
            if(i == n){
                for(int i = 1;i <= n;i++){
                    cout << x[i];
                }
                cout << " ";
            }
            else{
                Try(i + 1,n);
            }
            used[j] = 0;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Try(1,n);
        cout << "\n";
    }
    return 0;
}