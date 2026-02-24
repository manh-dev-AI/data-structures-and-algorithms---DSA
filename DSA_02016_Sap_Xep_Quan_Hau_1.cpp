#include <bits/stdc++.h>

using namespace std;
int n;
int x[20] = {0};
vector<int> used(20 , 1);
vector<int> xuoi;
vector<int> nguoc;
int cnt = 0;
void Try(int i){
    for(int j = 1;j <= n;j++){
        if(used[j] && xuoi[i - j + n] && nguoc[i+j-1]){
            x[i] = j;
            used[j] = 0;
            xuoi[i-j +n] = 0;
            nguoc[i + j - 1] = 0;
            if(i == n){
                cnt++;
            }
            else {
                Try(i + 1);
            }
            used[j] = 1;
            xuoi[i-j+n] = 1;
            nguoc[i+j-1] = 1;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        xuoi.assign(2*n + 1,1);
        nguoc.assign(2*n + 1,1);
        Try(1);
        cout << cnt << "\n";
        cnt = 0;
    }
    return 0;
}