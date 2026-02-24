#include <bits/stdc++.h>

using namespace std;
int x[20] = {0};

void Try(int i,int n){
    for(int j = 0;j <= 1;j += 1){
        x[i] = j;
        if(i == n){
            for(int t = 1;t <= n;t++){
                if(x[t] == 0){
                    cout << "A";
                }
                else {
                    cout << "B";
                }
            }
            cout << " ";
        }
        else {
            Try(i + 1,n);
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
        cout << endl;
    }
    return 0;
}