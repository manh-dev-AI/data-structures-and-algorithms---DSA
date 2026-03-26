#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    int a[n + 1][n + 1];
    for(int i = 0;i <= n;i++){
        for(int j = 0;j <= n;j++){
            a[i][j] = 0;
        }
    }
    for(int i = 1;i <= n;i++){
        string s;
        getline(cin , s);
        int v;
        stringstream ss(s);
        while(ss >> v){
            a[i][v] = 1;
            a[v][i] = 1;
        }
    }
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}