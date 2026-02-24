#include<bits/stdc++.h>

using namespace std;

int n;
int used[20] = {0};
int x[20] = {0};
int d = 1;



void Try(int i){
    for(int j = 1;j <= n;j++){
        if(!used[j]){
            used[j] = 1;
            x[i] = j;
            if(i == n){
                cout << d << ": ";
                for(int t = 1;t <= n;t++){
                    cout << x[t] << " ";
                } 
                cout << "\n";
                d++;
            }
            else {
                Try(i+1);
            }
            used[j] = 0;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n;
    Try(1);
    return 0;
}