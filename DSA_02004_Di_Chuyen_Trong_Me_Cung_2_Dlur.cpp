#include <bits/stdc++.h>
using namespace std;

char x[105];
int n;
bool ok;

void Try(int i, int j, int a[100][100], int t){

    if(i < 0 || j < 0 || i >= n || j >= n || a[i][j] == 0){
        return;
    }

    if(i == n - 1 && j == n - 1){

        ok = true;

        for(int k = 0; k < t; k++){
            cout << x[k];
        }

        cout << " ";
        return;
    }

    a[i][j] = 0;

    x[t] = 'D';
    Try(i + 1, j, a, t + 1);

    x[t] = 'L';
    Try(i, j - 1, a, t + 1);

    x[t] = 'R';
    Try(i, j + 1, a, t + 1);

    x[t] = 'U';
    Try(i - 1, j, a, t + 1);

    a[i][j] = 1;
}

int main(){

    int t;
    cin >> t;

    while(t--){

        cin >> n;

        int a[100][100];

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }

        ok = false;

        if(a[0][0] == 1){
            Try(0, 0, a, 0);
        }

        if(!ok){
            cout << -1;
        }

        cout << endl;
    }

    return 0;
}