#include<bits/stdc++.h>

using namespace std;

int n;
char x[100];
bool ok = true;

void Try(int i,int j ,int a[100][100],int t){
    if(i >= n || j >= n || a[i][j] == 0){
        return;
    }

    if(i == n-1 && j == n-1){
        ok = false;
        for(int r = 0;r < t;r++){
            cout << x[r];
        }
        cout << " ";
        return;
    }
    x[t] = 'D';
    Try(i + 1,j,a,t+1);
    x[t] = 'R';
    Try(i ,j+1,a,t+1);
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        int a[100][100];
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                cin >> a[i][j];
            }
        }
        Try(0,0,a,0);
        if(ok){
            cout << "-1";
        }
        ok = true;
        cout << endl;
    }
    
    return 0;
}