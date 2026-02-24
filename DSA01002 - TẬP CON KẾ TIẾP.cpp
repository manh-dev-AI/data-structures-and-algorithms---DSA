#include <bits/stdc++.h>

using namespace std;

void test(){
    int n,k;
    cin >> n >> k;
    int x[k];
    for(int i = 0;i < k;i++){
        cin >> x[i];
    }
    int i = k - 1;
    while(x[i] == n - k + i + 1 && i >= 0){
        i--;
    }
    if(i < 0){
        for(int i = 1;i <= k;i++){
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    x[i] += 1;
    for(int j = i + 1;j < k;j++){
        x[j] = x[j-1] + 1;
    }
    for(int i = 0;i < k;i++){
        cout << x[i] << " ";
    }
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        test();
    }
    return 0;
}