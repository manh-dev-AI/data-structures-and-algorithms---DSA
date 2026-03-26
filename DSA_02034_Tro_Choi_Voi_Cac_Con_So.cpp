#include <bits/stdc++.h>

using namespace std;
int x[20];
int n;
int used[20] = {0};

void backtrack(int i){
    for(int j = 1;j <= n;j++){
        if(!used[j] ){
            if (i > 1 && abs(j - x[i - 1]) == 1)
                continue;
            x[i] = j;
            used[j] = 1; 
            if(i == n){
                for(int t = 1;t <= n;t++){
                    cout << x[t] << "";
                }
                cout <<'\n';
            }
            else {
                backtrack(i + 1);
            }
            used[j] = 0;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        backtrack(1);
        cout <<"\n";
    }
    return 0;
}